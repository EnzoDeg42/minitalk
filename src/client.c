/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:07:57 by edegraev          #+#    #+#             */
/*   Updated: 2023/12/10 16:33:52 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_receive_response(int sig)
{
	if (sig == SIGUSR2)
	{
		printf("🟢 The server received the message\n");
		exit(0);
	}
}

void	ft_send_bits(int pid, char i)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((i & (0x01 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}
}

void	ft_send_message(int server_pid, const char *message)
{
	int	i;

	ft_send_bits(server_pid, 0x01);
	i = 0;
	while (message[i] != '\0')
	{
		ft_send_bits(server_pid, message[i]);
		i++;
	}
	ft_send_bits(server_pid, 0x04);
	i = 0;
	while (i < 3)
	{
		sleep(1);
		i++;
	}
	printf("🔴 Server did not respond, timeout\n");
}

int	main(int argc, char *argv[])
{
	int	server_pid;

	if (argc != 3)
	{
		printf("Usage: %s <pid> <message>\n", argv[0]);
		return (1);
	}
	server_pid = atoi(argv[1]);
	if (server_pid <= 0)
	{
		printf("Error: invalid pid\n");
		return (1);
	}
	signal(SIGUSR2, ft_receive_response);
	ft_send_message(server_pid, argv[2]);
	return (0);
}

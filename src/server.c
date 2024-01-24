/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:07:51 by edegraev          #+#    #+#             */
/*   Updated: 2023/12/10 16:58:44 by edegraev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

char	*ft_straddc(char *str, char c)
{
	char	*new;
	int		i;

	i = 0;
	if (!str)
	{
		new = (char *)malloc(sizeof(char) * 2);
		if (!new)
			return (0);
		new[0] = c;
		new[1] = '\0';
		return (new);
	}
	new = (char *)malloc(sizeof(char) * (ft_strlen(str) + 2));
	if (!new)
		return (0);
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	new[i] = c;
	new[i + 1] = '\0';
	free(str);
	return (new);
}

void	ft_incoming_signal(int sig, siginfo_t *info, void *context)
{
	static char	*message = 0;
	static int	bit;
	static int	i;

	(void)context;
	if (sig == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		if (i == 4)
		{
			ft_printf("\x1B[32m%d\x1B[0m> %s\n", info->si_pid, message);
			free(message);
			message = 0;
			kill(info->si_pid, SIGUSR2);
		}
		else
			message = ft_straddc(message, i);
		bit = 0;
		i = 0;
	}
}

void	print_welcome(void)
{
	ft_printf(" __  __ _       _ _        _ _    \n");
	ft_printf("|  \\/  (_)_ __ (_) |_ __ _| | | __\n");
	ft_printf("| |\\/| | | '_ \\| | __/ _` | | |/ /\n");
	ft_printf("| |  | | | | | | | || (_| | |   < \n");
	ft_printf("|_|  |_|_|_| |_|_|\\__\\__,_|_|_|\\_\\\n");
	ft_printf("\n");
}

int	main(void)
{
	struct sigaction	sa;

	ft_memset(&sa, 0, sizeof(sa));
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = ft_incoming_signal;
	print_welcome();
	ft_printf("PID Server : %d 😎\n", getpid());
	ft_printf("\n");
	while (1)
	{
		sigaction(SIGUSR1, &sa, NULL);
		sigaction(SIGUSR2, &sa, NULL);
		pause();
	}
	return (0);
}

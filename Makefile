# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 14:09:08 by edegraev          #+#    #+#              #
#    Updated: 2023/12/09 16:26:48 by edegraev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra -L ft_printf -I./include

FTSERVER = src/server.c
FTCLIENT = src/client.c
SERVER = server
CLIENT = client

all: $(SERVER) $(CLIENT)

$(SERVER): $(FTSERVER)
	$(MAKE) -C ./ft_printf
	$(CC) $(CFLAGS) $^ ./ft_printf/libftprintf.a -o server

$(CLIENT): $(FTCLIENT)
	$(MAKE) -C ./ft_printf
	$(CC) $(CFLAGS) $^ ./ft_printf/libftprintf.a -o client

clean:
	$(MAKE) clean -C ./ft_printf

fclean: clean
	$(MAKE) fclean -C ./ft_printf
	rm -f server && rm -f client

re: fclean all

.PHONY: all clean fclean re

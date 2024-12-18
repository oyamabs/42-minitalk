/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_clt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <tchampio@student.42lehavre.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:57:50 by tchampio          #+#    #+#             */
/*   Updated: 2024/12/11 11:40:15 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <signal.h>
#include <unistd.h>
#include "../../includes/minitalk.h"
#define DELAY 100

void	sighandler(int sig)
{
	(void)sig;
	ft_printf(GRN "Server has recieved message !\n" RST);
}

void	send_str(int pid, char *s)
{
	unsigned char	rawbyte;
	int				currentbit;

	while (*s)
	{
		currentbit = -1;
		while (++currentbit < 8)
		{
			rawbyte = (unsigned char)*s;
			if ((rawbyte >> (7 - currentbit) & 1) == 1)
				kill(pid, SIGUSR2);
			if ((rawbyte >> (7 - currentbit) & 1) == 0)
				kill(pid, SIGUSR1);
			usleep(DELAY);
		}
		s++;
	}
	currentbit = -1;
	while (++currentbit < 8)
	{
		kill(pid, SIGUSR1);
		usleep(DELAY);
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	recvsignal;

	ft_bzero(&recvsignal, sizeof(recvsignal));
	recvsignal.sa_handler = sighandler;
	sigaction(SIGUSR1, &recvsignal, NULL);
	if (argc != 3)
	{
		ft_printf(RED "Invalid number of parameters. \
Usage: ./client <PID> <\"message\">\n");
		return (1);
	}
	send_str(ft_atoi(argv[1]), argv[2]);
	while (1)
		usleep(DELAY);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_srv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchampio <tchampio@student.42lehavre.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 12:37:25 by tchampio          #+#    #+#             */
/*   Updated: 2024/12/12 12:29:48 by tchampio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>
#include <sys/types.h>
#include <signal.h>
#include "../../includes/minitalk.h"

void	print_free_signal(char *string, siginfo_t *s)
{
	ft_printf("%s\n", string);
	free(string);
	kill(s->si_pid, SIGUSR1);
}

int	calculate_power(int power, int n)
{
	int	res;
	int	i;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	res = 1;
	i = 0;
	while (i < power)
	{
		res = res * n;
		i++;
	}
	return (res);
}

char	*add_letter_to_string(char *s, int c)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	j = 0;
	tab = (char *)malloc((ft_strlen(s) + 2) * sizeof(*tab));
	if (!tab)
		return (NULL);
	while (s[i])
		tab[j++] = s[i++];
	tab[j++] = c;
	tab[j] = '\0';
	free(s);
	return (tab);
}

void	signal_handler(int sig, siginfo_t *s, void *ctx)
{
	static int	ascii = 0;
	static int	bits = 0;
	static char	*string = NULL;

	(void)ctx;
	if (!string)
		string = ft_strdup("");
	if (sig == SIGUSR1)
	{
		ascii += 0;
		ft_printf("0 recieved\n");
	}
	else if (sig == SIGUSR2)
	{
		ascii += calculate_power(7 - bits, 2);
		ft_printf("1 recieved\n");
	}
	bits++;
	if (bits == 8)
	{
		string = add_letter_to_string(string, ascii);
		if (ascii == '\0')
		{
			print_free_signal(string, s);
			string = NULL;
		}
		bits = 0;
		ascii = 0;
	}
}

int	main(void)
{
	struct sigaction	sighandler;

	ft_printf("███╗   ███╗██╗███╗   ██╗██╗████████╗ █████╗ ██╗     ██╗  ██╗\n");
	ft_printf("████╗ ████║██║████╗  ██║██║╚══██╔══╝██╔══██╗██║     ██║ ██╔╝\n");
	ft_printf("██╔████╔██║██║██╔██╗ ██║██║   ██║   ███████║██║     █████╔╝ \n");
	ft_printf("██║╚██╔╝██║██║██║╚██╗██║██║   ██║   ██╔══██║██║     ██╔═██╗ \n");
	ft_printf("██║ ╚═╝ ██║██║██║ ╚████║██║   ██║   ██║  ██║███████╗██║  ██╗\n");
	ft_printf("╚═╝     ╚═╝╚═╝╚═╝  ╚═══╝╚═╝   ╚═╝   ╚═╝  ╚═╝╚══════╝╚═╝  ╚═╝\n");
	ft_printf("\n\n");
	ft_printf("[" GRN "PID" RST ": " YEL "%d" RST "]\n", getpid());
	ft_bzero(&sighandler, sizeof(sighandler));
	sighandler.sa_flags = SA_SIGINFO;
	sighandler.sa_sigaction = signal_handler;
	sigaction(SIGUSR1, &sighandler, NULL);
	sigaction(SIGUSR2, &sighandler, NULL);
	while (true)
		usleep(50);
}

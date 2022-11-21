/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:42:34 by lucasmar          #+#    #+#             */
/*   Updated: 2022/11/21 10:27:23 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int	ft_check_arguments(int argc, char **argv)
{
	(void)argv;
	if (argc < 5)
		printf("\033[0;31m"
			"\nErro 0 - "
			"please insert at least 4 arguments!\n\n"
			"\t1.(number of philosophers)\n"
			"\t2.(time to die)\n"
			"\t3.(time to eat)\n"
			"\t4.(time to sleep)\n"
			"\t*5.(optional, number of times for each philosopher to eat)\033[0m\n"
			"\n\tex : ./philo 2 200 600 1000 6 \n\n");
	return (0);
}

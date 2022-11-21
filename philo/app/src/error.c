/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:57:04 by lucasmar          #+#    #+#             */
/*   Updated: 2022/11/21 12:08:24 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void	ft_error(int number)
{
	if (number == 0)
	{
		printf("\033[0;31m"
		"\nErro 0 - "
		"please insert at least 4 arguments!\n\n"
		"\t1.(number of philosophers)\n"
		"\t2.(time to die)\n"
		"\t3.(time to eat)\n"
		"\t4.(time to sleep)\n"
		"\t*5.(optional, number of times for each philosopher to eat)\033[0m\n"
		"\n\tex : ./philo 2 200 600 1000 6 \n\n");
	}
	if (number == 1)
		printf("\033[0;31m\tError 1 - Accepted values ​​above '0' !\033[0m\n");
	if (number == 2)
		printf("\033[0;31m\tError 2 - Only number is accepted!\033[0m\n");
}

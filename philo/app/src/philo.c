/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:13:09 by lucasmar          #+#    #+#             */
/*   Updated: 2022/11/21 09:58:45 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int	main(int argc, char **argv)
{
	t_ph	ph;

	//inicio checar os argumentos
	if (ft_check_arguments(argc, argv))
		printf("error\n");
	ph.a = 10;
	printf("Testando make ok valor de a : %d\n", ph.a);
	return (0);
}

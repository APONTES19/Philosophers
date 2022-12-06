/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:13:09 by lucasmar          #+#    #+#             */
/*   Updated: 2022/12/06 00:43:15 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int	main(int argc, char **argv)
{
	t_ph	ph_b;
	t_ph	*ph;

	ph = &ph_b;
	if (ft_check_arguments(argc, argv) == 1)
		return(1);
	ft_set_arguments(argv, ph);
	ph_b.time_tamp = ft_get_time();
	ft_set_philos(ph);









	printf("Numero de filosofos = %d\n", ph_b.num_philo);
	printf("Tempo para a morte  = %d\n", ph_b.time_die);
	printf("Tempo para comer    = %d\n", ph_b.time_eat);
	printf("Tempo para dormir   = %d\n", ph_b.time_sleep);
	if (ph_b.num_x_eat)
		printf("Numero de vezes que cada filosofo come = %d\n", ph_b.num_x_eat);
	printf("Valor time tamp : %ld\n", ph_b.time_tamp);

	int i;

	i =0;
	while(i < ph->num_philo)
	{
		printf("Filosofo %d : \n", ph->philo[i].key_id);
		i++;
	}
	return (0);
}

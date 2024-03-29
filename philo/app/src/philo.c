/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:13:09 by lucasmar          #+#    #+#             */
/*   Updated: 2022/12/10 01:50:21 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int	main(int argc, char **argv)
{
	t_ph	*ph;
	t_data	data;

	if (ft_check_arguments(argc, argv) == 1)
		return (1);
	ft_set_init(&data, argv);
	ph = (t_ph *) malloc (sizeof (t_ph) * ft_long_atoi(argv[1]));
	ft_set_philo(&data, ph);
	pthread_create(&data.monitoring, NULL, ft_monitoring, ph);
	pthread_join(data.monitoring, NULL);
	ft_join_thread(ph);
	ft_destroy_mutexs(&data);
	free(ph);
	free(data.forks);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:10:25 by lucasmar          #+#    #+#             */
/*   Updated: 2022/12/06 00:42:39 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/philo.h"

void	ft_set_arguments(char **argv, t_ph *ph)
{
	ph->num_philo = (ft_long_atoi(argv[1]));
	ph->time_die = (ft_long_atoi(argv[2])) * MILLESECONS;
	ph->time_eat = (ft_long_atoi(argv[3])) * MILLESECONS;
	ph->time_sleep = (ft_long_atoi(argv[4])) * MILLESECONS;
	if (argv[5])
		ph->num_x_eat = (ft_long_atoi(argv[5]));
	else
		ph->num_x_eat = -1;
	ph->fork =
		(pthread_mutex_t *) malloc (sizeof (pthread_mutex_t) * ph->num_philo);
}

long	ft_get_time(void)
{
	struct timeval	time;
	gettimeofday(&time, NULL);

	return((time.tv_sec * 1000) + (time.tv_usec / 1000));
}

void	ft_set_philos(t_ph *ph)
{
	int	i;

	ph->philo = malloc(sizeof(t_id) * ph->num_philo);
	i = 0;
	while( i < ph->num_philo)
	{
		ph->philo[i].key_id = i + 1;
		ph->philo->left_fork = 0;
		ph->philo->right_fork = 0;
		ph->philo->num_meals = 0;
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:10:25 by lucasmar          #+#    #+#             */
/*   Updated: 2022/12/10 17:29:45 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void	ft_set_init(t_data *data, char **argv)
{
	data->num_philo = ft_long_atoi(argv[1]);
	data->forks = (pthread_mutex_t *) malloc
		(sizeof (pthread_mutex_t) * data->num_philo);
	data->death = 0;
	data->t_die = ft_long_atoi(argv[2]) * MICROSECONDS;
	data->t_eat = ft_long_atoi(argv[3]) * MICROSECONDS;
	data->t_sleep = ft_long_atoi(argv[4]) * MICROSECONDS;
	data->all_eat = 0;
	if (argv[5])
		data->num_eat = ft_long_atoi(argv[5]);
	else
		data->num_eat = -1;
	data->t_init = ft_get_time();
	pthread_mutex_init(&data->print_mx, NULL);
	ft_init_mutex(data);
}

void	ft_init_mutex(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->num_philo)
	{
		pthread_mutex_init(&data->forks[i], NULL);
		i++;
	}
}

void	ft_set_philo(t_data *data, t_ph *ph)
{
	int	i;

	i = 0;
	while (i < data->num_philo)
	{
		ft_init_philo(data, &ph[i]);
		ph[i].id = i + 1;
		ph[i].fork_left = &data->forks[i];
		if (data->num_philo > 1)
		{
			if (i + 1 == data->num_philo)
			{
				ph[i].fork_left = &data->forks[0];
				ph[i].fork_right = &data->forks[i];
			}
			else
				ph[i].fork_right = &data->forks[i + 1];
		}
		else
			ph[i].fork_right = NULL;
		i++;
	}
	ft_set_thread(data, ph);
}

void	ft_init_philo(t_data *data, t_ph *ph)
{
	ph->num_eat = 0;
	ph->data = data;
	ph->last_eat = ft_get_time();
}

void	ft_set_thread(t_data *data, t_ph *ph)
{
	int	i;

	i = 0;
	while (i < data->num_philo)
	{
		pthread_create(&ph[i].thread, NULL, ft_dinner, &ph[i]);
		i++;
	}
}

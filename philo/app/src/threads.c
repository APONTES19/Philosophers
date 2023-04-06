/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 00:05:41 by lucasmar          #+#    #+#             */
/*   Updated: 2022/12/10 20:23:51 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void	*ft_dinner(void *philo)
{
	t_ph	*ph;

	ph = (t_ph *) philo;
	if (ph->id % 2 == 0)
		usleep(100);
	while (ph->data->death == 0)
	{
		ft_action_eat(ph);
		if (ph->fork_right != NULL)
		{
			ph->num_eat++;
			if (ph->data->num_eat != -1 && ph->data->num_eat == ph->num_eat)
			{
				ph->data->all_eat++;
				return (NULL);
			}
			ft_action_sleep(ph);
			ft_action_think(ph);
		}
		else
			usleep(ph->data->t_die);
	}
	return (NULL);
}

void	*ft_monitoring(void	*philo)
{
	t_data	*data;
	t_ph	*ph;

	ph = (t_ph *) philo;
	data = ph->data;
	while (data->death == 0)
	{
		ph->i = ph->data->num_philo -1;
		while (ph->i >= 0)
		{
			usleep(100);
			if ((ft_get_time() - ph[ph->i].last_eat) >= data->t_die
				&& data->num_eat != ph->num_eat)
				ft_print_action(&ph[ph->i], 'd');
			if (data->all_eat == data->num_philo)
			{
				data->death = 1;
				break ;
			}
			ph->i--;
		}
		usleep (ph->data->t_die);
	}
	return (NULL);
}

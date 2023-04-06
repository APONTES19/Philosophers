/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 08:21:00 by lucasmar          #+#    #+#             */
/*   Updated: 2022/12/10 16:35:47 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

void	ft_action_eat(t_ph *ph)
{
	pthread_mutex_lock(ph->fork_left);
	ft_print_action(ph, 'f');
	if (ph->fork_right != NULL)
	{
		pthread_mutex_lock(ph->fork_right);
		ft_print_action(ph, 'f');
		ft_print_action(ph, 'e');
		ph->last_eat = ft_get_time();
		usleep(ph->data->t_eat);
		pthread_mutex_unlock(ph->fork_right);
	}
	else
		ft_print_action(ph, 'f');
	pthread_mutex_unlock(ph->fork_left);
}

void	ft_action_sleep(t_ph *ph)
{
	ft_print_action(ph, 's');
	if (ph->data->death != 1)
		usleep(ph->data->t_sleep);
}

void	ft_action_think(t_ph *ph)
{
	ft_print_action(ph, 't');
}

void	ft_print_action(t_ph *ph, char action)
{
	pthread_mutex_lock(&ph->data->print_mx);
	if (ph->data->death != 1)
	{
		printf ("%lu philosopher", ft_time_prog(ph->data));
		if (action == 'f')
			printf(" %d has taken a fork\n", ph->id);
		if (action == 'e')
			printf(" %d is eating\n", ph->id);
		if (action == 's')
			printf(" %d is sleeping\n", ph->id);
		if (action == 't')
			printf(" %d is thinking\n", ph->id);
		if (action == 'd')
		{
			printf(" %d died\n", ph->id);
			ph->data->death = 1;
		}
	}
	pthread_mutex_unlock(&ph->data->print_mx);
}

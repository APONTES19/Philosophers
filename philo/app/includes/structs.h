/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:34:29 by lucasmar          #+#    #+#             */
/*   Updated: 2022/12/10 20:23:03 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

# include "philo.h"

typedef struct s_data
{
	pthread_t		monitoring;
	pthread_mutex_t	*forks;
	int				num_philo;
	_Atomic int		death;
	_Atomic int		all_eat;
	int				num_eat;
	int				exit;
	time_t			t_sleep;
	time_t			t_die;
	time_t			t_eat;
	time_t			t_init;
	pthread_mutex_t	print_mx;
}	t_data;

typedef struct s_philo
{
	pthread_t		thread;
	int				id;
	_Atomic int		num_eat;
	t_data			*data;
	_Atomic time_t	last_eat;
	pthread_mutex_t	*fork_left;
	pthread_mutex_t	*fork_right;
	int				i;
}	t_ph;

#endif

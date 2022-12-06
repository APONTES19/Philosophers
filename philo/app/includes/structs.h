/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:34:29 by lucasmar          #+#    #+#             */
/*   Updated: 2022/12/06 00:42:58 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCT_H

#include "philo.h"

typedef struct s_philo_id
{
	int	key_id;
	int	left_fork;
	int	right_fork;
	int	num_meals;
}t_id;

typedef struct s_philo
{
	int	num_philo;
	int	time_eat;
	int	time_sleep;
	int	time_die;
	int	num_x_eat;
	long int	time_tamp;
	long int	time_tamp_2;
	pthread_mutex_t	*fork;
	t_id	*philo;
}	t_ph;


#endif

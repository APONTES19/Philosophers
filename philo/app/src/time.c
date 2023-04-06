/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:31:25 by lucasmar          #+#    #+#             */
/*   Updated: 2022/12/10 17:31:37 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

time_t	ft_time_prog(t_data *data)
{
	time_t	result;

	result = ft_get_time() - data->t_init;
	result = result / 1000;
	return (result);
}

time_t	ft_get_time(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return (time.tv_usec + (time.tv_sec * 1000000));
}

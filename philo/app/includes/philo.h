/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:32:27 by lucasmar          #+#    #+#             */
/*   Updated: 2022/12/06 00:37:35 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include "includes.h"

int		ft_check_arguments(int argc, char **argv);
void	ft_error(int number);
long	ft_long_atoi(const char *str);
int		ft_ponter_isdigit(char *c);
int		ft_convert_argument(char **argv);
void	ft_set_arguments(char **argv, t_ph *ph);
long	ft_get_time(void);
void	ft_set_philos(t_ph *ph);


#endif

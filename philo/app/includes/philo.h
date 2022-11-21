/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:32:27 by lucasmar          #+#    #+#             */
/*   Updated: 2022/11/21 11:53:37 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include "includes.h"

int	ft_check_arguments(int argc, char **argv);
void	ft_error(int number);
long	ft_long_atoi(const char *str);
int	ft_ponter_isdigit(char *c);
int	ft_convert_argument(char **argv);
#endif

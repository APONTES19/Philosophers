/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:32:27 by lucasmar          #+#    #+#             */
/*   Updated: 2022/12/10 20:27:13 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include "includes.h"

int		ft_check_arguments(int argc, char **argv);
int		ft_convert_argument(char **argv);
int		ft_ponter_isdigit(char *c);
int		ft_error(int number);
void	ft_join_thread(t_ph *ph);
void	ft_destroy_mutexs(t_data *data);
void	ft_set_init(t_data *data, char **argv);
time_t	ft_get_time(void);
void	ft_init_mutex(t_data *data);
void	ft_init_philo(t_data *data, t_ph *ph);
void	ft_set_philo(t_data *data, t_ph *ph);
void	*ft_dinner(void *philo);
time_t	ft_time_prog(t_data *data);
void	*ft_monitoring(void	*philo);
void	ft_action_eat(t_ph *ph);
void	ft_print_action(t_ph *ph, char action);
void	ft_action_sleep(t_ph *ph);
void	ft_action_think(t_ph *ph);
long	ft_long_atoi(const char *str);
void	ft_set_thread(t_data *data, t_ph *ph);

#endif

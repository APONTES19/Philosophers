/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:42:34 by lucasmar          #+#    #+#             */
/*   Updated: 2022/12/10 01:53:42 by lucasmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

int	ft_check_arguments(int argc, char **argv)
{
	if (argc > 6)
		return (ft_error(4));
	if (argc < 5)
		return (ft_error(0));
	if (ft_convert_argument(argv) == 1)
		return (1);
	return (0);
}

int	ft_convert_argument(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_ponter_isdigit(argv[i]) == 1)
			return (ft_error(2));
		if (ft_long_atoi(argv[i]) == 0)
			return (ft_error(1));
		i++;
	}
	return (0);
}

int	ft_ponter_isdigit(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		if (c[i] < 48 || c[i] > 57)
			return (1);
		i++;
	}
	return (0);
}

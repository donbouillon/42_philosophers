/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forum.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:33:59 by slistle           #+#    #+#             */
/*   Updated: 2023/08/27 15:04:24 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	ft_forum(t_list *forum, int	argc, char **argv)
{
	forum->philo_nbr = ft_atoi(argv[1]);
	forum->time_death = ft_atoi(argv[2]);
	forum->time_eat = ft_atoi(argv[3]);
	forum->time_sleep = ft_atoi(argv[4]);
	if (argc == 6)
		forum->nbr_meals(ft_atoi(argv[5]));
	else
		forum->nbr_meals = -1;
}


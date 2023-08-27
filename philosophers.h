/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:28:17 by slistle           #+#    #+#             */
/*   Updated: 2023/08/27 14:53:19 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				index;
	int				meals;
	t_list			left_fork;
	t_list			right_fork;
	struct	s_forum	*forum;
}	t_list;

typedef struct	s_forum
{
	int				philo_nbr;
	int				time_death;
	int				time_eat;
	int				time_sleep;
	int				nbr_meals;
	pthread_t		*arr_threads;
	t_list			*arr_philos;
	pthread_mutex_t	*arr_forks;
}	t_forum;

#endif
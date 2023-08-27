/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slistle <slistle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:22:22 by slistle           #+#    #+#             */
/*   Updated: 2023/08/27 14:59:57 by slistle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int argc, char *argv)
{
	t_forum	*forum;
	
	forum = NULL;
	if (argc == 5 || argc == 6)
	{
		ft_forum(forum, argc, argv);
	}
}
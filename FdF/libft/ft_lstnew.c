/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsekne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:59:39 by jsekne            #+#    #+#             */
/*   Updated: 2024/10/23 16:04:18 by jsekne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_point	*ft_new_point(int x, int y, int z, t_info *info)
{
	t_point	node;

	node = malloc(sizeof(t_point));
	if (!node)
		return (NULL);
	node->y = y;
	node->x = x;
	node->z = z;
	node->info = info;
	return (node);
}


t_point	*ft_new_info(int cols, int rows)
{
	t_point	node;

	node = malloc(sizeof(t_point));
	if (!node)
		return (NULL);
	node->cols = cols;
	node->rows = rows;
	return (node);
}

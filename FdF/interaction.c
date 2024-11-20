/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interaction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsekne <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:59:10 by jsekne            #+#    #+#             */
/*   Updated: 2024/11/20 17:02:41 by jsekne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ft_close_win(void *param)
{
	cleanup(param);
	exit(0);
}

int	ft_key_press(int keycode, void *param)
{
	t_vars	*vars;

	vars = param;
	if (keycode == ESCAPE)
		ft_close_win(vars);
	else if (keycode == KEY_A)
		vars->transl = 1;
	else if (keycode == KEY_D)
		vars->transl = 2;
	else if (keycode == KEY_W)
		vars->transl = 3;
	else if (keycode == KEY_S)
		vars->transl = 4;
	ft_draw(vars);
	return (0);
}

int	ft_mouse_button(int button, int x, int y, void *params)
{
	t_vars	*vars;

	(void)y;
	(void)x;
	vars = params;
	if (button == 4)
		vars->zoom++;
	else if (button == 5)
		vars->zoom--;
	vars->transl = 0;
	if (vars->zoom < 1)
		vars->zoom = 1;
	ft_draw(vars);
	return (0);
}

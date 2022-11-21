/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <anshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:10:11 by anshimiy          #+#    #+#             */
/*   Updated: 2022/11/21 16:44:18 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	my_mlx_pixel_put(t_img *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->width + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

void	destroy_img(void *mlx, void *img)
{
	if (img)
		mlx_destroy_image(mlx, img);
}

int	exit_game(t_mlx mlx)
{
	mlx_destroy_window(mlx.mlx, mlx.win);
	destroy_img(mlx.mlx, mlx.img.img);
	exit(0);
    return (0);
}
/*
t_mlx	*get_mlx(void)
{
	static t_mlx	mlx;

	if (mlx.init != 1)
	{
		mlx.mlx = mlx_init();
		mlx.win = mlx_new_window(mlx.mlx, 1080, 720, "Cub3D");
		my_mlx_new_image(mlx.mlx, &mlx.img, 1080, 720);
		mlx.init = 1;
	}
	return (&mlx);
}*/

int	key_release(int key, t_mlx mlx)
{
	/*if (key == W_KEY)
		t_game.player.vel_u = 0;
	if (key == A_KEY)
		g_game.player.vel_l = 0;
	if (key == S_KEY)
		g_game.player.vel_d = 0;
	if (key == D_KEY)
		g_game.player.vel_r = 0;
	if (key == LEFT_KEY)
		g_game.player.turn_l = 0;
	if (key == RIGHT_KEY)
		g_game.player.turn_r = 0;*/
	if (key == ESC)
		exit_game(mlx);
	return (key);
}

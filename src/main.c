/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anshimiy <anshimiy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:14:48 by anshimiy          #+#    #+#             */
/*   Updated: 2022/11/21 16:54:55 by anshimiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	main(void)
{
	t_mlx	*mlx;
	void	*mlx_win;
	t_img	img;
    t_resolution res;
    int x;
    int y;

    res.width_x = 1080;
    res.height_y = 720;
    x = res.width_x/5;
    y = res.height_y/5;
	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, res.width_x, res.height_y, "Hello world!");
	img.img = mlx_new_image(mlx, res.width_x, res.height_y);
    /*
	** After creating an image, we can call `mlx_get_img_addr`, we pass
	** `bits_per_pixel`, `width`, and `endian` by reference. These will
	** then be set accordingly for the *current* img address.
	*/
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.width,
								&img.endian);
	while (y < res.height_y/2)
    {
        x = 0;
        while (x <= res.width_x/2)
        {
            my_mlx_pixel_put(&img, x, y, 0x00FF0000);
            x++;
        }
        y++;
    }
    mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
    mlx_hook(mlx_win, 17, 0, exit_game, &mlx);
    mlx_hook(mlx_win, 3, 1L << 1, key_release, mlx);
	mlx_loop(mlx);
}
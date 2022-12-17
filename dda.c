/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dda.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 19:43:43 by yamzil            #+#    #+#             */
/*   Updated: 2022/12/16 19:58:59 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void    dda_algo(t_data *data, double x1, double y1)
{
	double	dx;
	double	dy;
	double	step;
	double	xinc;
	double	yinc;
	double new_x;
	double new_y;

	if (x1 < 0 || y1 < 0 || x1 >= WIN_WIDTH || y1 >= WIN_HEIGHT)
		return;
	dx = x1 - data->player->px;
	dy = y1 - data->player->py;
	new_x = data->player->px;
	new_y = data->player->py;
	if (fabs(dx) > fabs(dy))
		step = fabs(dx);
	else
		step = fabs(dy);
	xinc = dx / step;
	yinc = dy / step;
	int i;

	i = 0;
	while (i < step)
	{
		new_y += yinc;
		new_x += xinc;
		// if(check_wall(data, new_x, new_y-yinc) || check_wall(data, new_x-xinc, new_y))
		// 	break;
		// // if(new_x >= WIN_WIDTH || new_y >= WIN_HEIGHT || new_y < 0 || new_x < 0)
		// // 	break;
		writing_pxl_to_img(data->list, 0.5 * new_x, 0.5 * new_y , BLACK);
		i++;
	}
}
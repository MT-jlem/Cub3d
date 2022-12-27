/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:51:05 by yamzil            #+#    #+#             */
/*   Updated: 2022/12/27 19:14:19 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub3d_bonus.h"

double	distance(double x1, double y1, double x2, double y2)
{
	return (sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
}

void	find_dis(t_cast *info)
{
	info->horizontal_inter = false;
	info->vertical_inter = false;
	if (info->vdis > info->hdis)
	{
		info->horizontal_inter = true;
		info->wx = info->hwallx;
		info->wy = info->hwally;
		info->dis = info->hdis;
	}
	else
	{
		info->vertical_inter = true;
		info->wx = info->vwallx;
		info->wy = info->vwally;
		info->dis = info->vdis;
	}
}

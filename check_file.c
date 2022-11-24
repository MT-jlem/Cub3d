/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:25:08 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/24 15:58:52 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int check_storing_file_data(t_data *lst)
{
    parsing_path(lst);
    printf("%d", lst->begin);
	parsing_floor(lst);
	parsing_ceilling(lst);
    storing_colors_ceilling(lst);
    storing_colors_floor(lst);
    return (0);
}
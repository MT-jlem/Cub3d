/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamzil <yamzil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:42:48 by yamzil            #+#    #+#             */
/*   Updated: 2022/11/24 15:59:07 by yamzil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void    check_extension(int ac, char **av)
{
    size_t	len;

    len = ft_strlen(av[1]);
    if (ac == 2)
    {
        if (av[1][len - 1] != 'b' || av[1][len - 2] != 'u' 
			|| av[1][len - 3] != 'c' || av[1][len - 4] != '.')
			write(2, "Error in extension \n", 21);
    }
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putendl_fd("Incorrect numbers of arguments", 2);
		exit (0);
	}
	else 
	{
		t_data  *lst;

		lst = malloc(sizeof(t_data));
		if (!lst)
			return (0);
		check_extension(ac, av);
		get_file(lst, av);
		check_storing_file_data(lst);
		// check_map(lst);
	}
}
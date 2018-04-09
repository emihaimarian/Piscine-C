/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 00:27:20 by mienache          #+#    #+#             */
/*   Updated: 2017/10/21 00:49:17 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	if (check_grid(argv, argc))
	{
		if (sudoku(argv, 9))
			display_board(argv);
		else
		{
			ft_putstr("Error");
			ft_putchar('\n');
		}
	}
	else
	{
		ft_putstr("Error");
		ft_putchar('\n');
	}
	return (0);
}

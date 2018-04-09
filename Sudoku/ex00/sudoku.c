/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/21 00:23:18 by mienache          #+#    #+#             */
/*   Updated: 2017/10/29 16:10:53 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		sudoku(char **tab, int position)
{
	int		x;
	int		y;
	char	nb;

	nb = '0';
	x = position / 9;
	y = position % 9;
	if (position == 90)
		return (1);
	if (tab[x][y] != '.')
		return (sudoku(tab, position + 1));
	while (++nb <= '9')
	{
		if (check_line(tab, nb, x) + check_column(tab, nb, y) == 2)
		{
			if (check_block(tab, x, y, nb) == 1)
			{
				tab[x][y] = nb;
				if (sudoku(tab, position + 1))
					return (1);
			}
		}
	}
	tab[x][y] = '.';
	return (0);
}

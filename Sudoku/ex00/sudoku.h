/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 23:38:20 by mienache          #+#    #+#             */
/*   Updated: 2017/10/20 23:53:04 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	display_board(char **tab);
int		check_line(char **tab, char nb, int x);
int		check_column(char **tab, char nb, int y);
int		check_block(char **tab, int x, int y, char nb);
int		check_grid(char **tab, int n);
int		sudoku(char **tab, int position);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:27:01 by mienache          #+#    #+#             */
/*   Updated: 2017/10/29 15:30:39 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
int		addsubs(char **str);
int		atom(char **str);
int		factor(char **str);
void	ft_shownbr(int nb);
int		eval_expr(char *str);
int		check_minus(char *str);

#endif

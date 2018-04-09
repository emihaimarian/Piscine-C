/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:25:46 by mienache          #+#    #+#             */
/*   Updated: 2017/10/29 18:56:49 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		addsubs(char **str)
{
	int		nbr1;
	int		nbr2;
	char	opr;

	nbr1 = factor(str);
	while (1)
	{
		while (**str == ' ')
			(*str)++;
		opr = **str;
		if (opr != '-' && opr != '+')
			return (nbr1);
		(*str)++;
		nbr2 = factor(str);
		if (opr == '-')
			nbr1 = nbr1 - nbr2;
		else
			nbr1 = nbr1 + nbr2;
	}
}

void	res_modifier(int res_cpy, char **str)
{
	while (res_cpy)
	{
		(*str)++;
		res_cpy = res_cpy / 10;
	}
}

int		atom(char **str)
{
	int i[3];

	while (**str == ' ')
		(*str)++;
	i[2] = 0;
	if (**str == '-')
	{
		i[2] = 1;
		(*str)++;
	}
	if (**str == '+')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		i[0] = addsubs(str);
		(*str)++;
		return (i[2] ? -i[0] : i[0]);
	}
	i[0] = ft_atoi(*str) * check_minus(*(str) - 1);
	i[1] = i[0];
	res_modifier(i[1], str);
	return (i[0]);
}

int		factor(char **str)
{
	int nbr1;
	int nbr2;
	int opr;

	nbr1 = atom(str);
	while (1)
	{
		while (**str == ' ')
			(*str)++;
		opr = **str;
		if (opr != '/' && opr != '*' && opr != '%')
			return (nbr1);
		(*str)++;
		nbr2 = atom(str);
		if (opr == '/')
			nbr1 = nbr1 / nbr2;
		if (opr == '*')
			nbr1 = nbr1 * nbr2;
		if (opr == '%')
			nbr1 = nbr1 % nbr2;
	}
}

int		eval_expr(char *str)
{
	return (addsubs(&str));
}

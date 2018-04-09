/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:26:19 by mienache          #+#    #+#             */
/*   Updated: 2017/10/29 15:27:44 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_shownbr(int nb)
{
	long long x;

	x = nb;
	if (x != 0)
	{
		if (x <= 0)
		{
			x = -x;
			ft_putchar('-');
		}
		ft_shownbr(x / 10);
		ft_putchar('0' + x % 10);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
	}
	ft_shownbr(nb);
}

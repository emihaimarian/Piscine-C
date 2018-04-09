/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mienache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 22:34:18 by mienache          #+#    #+#             */
/*   Updated: 2017/10/23 21:50:30 by mienache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		mat_r(char *sr, char *pat, int i_s, int i_p)
{
	if (i_p == ft_strlen(pat) && i_s == ft_strlen(sr))
		return (1);
	if (i_s > ft_strlen(sr) && i_p > ft_strlen(pat))
		return (0);
	if (sr[i_s] == pat[i_p] && pat[i_p] != '*')
		return (mat_r(sr, pat, i_s + 1, i_p + 1));
	if (pat[i_p] == '*' && sr[i_s] == 0)
		return (mat_r(sr, pat, i_s, i_p + 1));
	if (pat[i_p] == '*' && sr[i_s] != 0)
		return (mat_r(sr, pat, i_s, i_p + 1) || mat_r(sr, pat, i_s + 1, i_p));
	return (0);
}

int		match(char *sr, char *pat)
{
	return (mat_r(sr, pat, 0, 0));
}

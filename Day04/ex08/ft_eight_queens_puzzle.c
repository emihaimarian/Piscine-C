#include <stdio.h>

int	is_valid(int *tab, int x, int y)
{
	int		i;

	i = 0;
	while (i < x)
	{
		if (tab[i] == y || y - x - (tab[i] - i) == 0
				|| x + y - i - tab[i] == 0)
			return (0);
		i += 1;
	}
	return (1);
}

void	ft_solve(int *tab, int x)
{
	int		y;

	y = 0;
	while (y < 8)
	{
		if (is_valid(tab, x, y))
		{
			tab[x] = y;
			if (x == 7)
				tab[8] += 1;
			else
				ft_solve(tab, x + 1);
		}
		y += 1;
	}
}

int	ft_eight_queens_puzzle(void)
{
	int		tab[9];

	ft_solve(tab, 0);
	return (tab[8]);
}

int	main()
{
	printf("%d\n", ft_eight_queens_puzzle());
	return (0);
}

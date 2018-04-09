#include <stdio.h>

int	ft_power(int nb, int power, int n)
{
	int i;

	i = 2;
	while (i <= power)
	{
		n *= nb;
		i++;
	}
	return (n);
}

int	ft_iterative_power(int nb, int power)
{
	int n;
	int sign;

	n = 0;
	sign = 1;
	if (power == 0)
		return (1);
	else if (power > 0)
	{
		if (n < 0)
		{
			sign = -1;
			n = -nb;
		}
		else
			n = nb;
		n = ft_power(nb, power, n);
		return (sign * n);
	}
	else
		return (0);
}

int	main()
{
	printf("2**2 %d\n", ft_iterative_power(2, 2));
	printf("1**0 %d\n", ft_iterative_power(1, 0));
	printf("-5**2 %d\n", ft_iterative_power(-5, 2));
	printf("-5**3 %d\n", ft_iterative_power(-5, 3));
	printf("0**0 %d\n", ft_iterative_power(0, 0));
	printf("0**2 %d\n", ft_iterative_power(0, 2));
	printf("4**-2 %d\n", ft_iterative_power(4, -2));
}

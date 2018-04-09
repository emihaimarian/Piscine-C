#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		power = nb * ft_recursive_power(nb, power - 1);
	return (power);
}

int	main(void)
{
	printf("2**2 %d\n", ft_recursive_power(2, 2));
	printf("1**0 %d\n", ft_recursive_power(1, 0));
	printf("-5**2 %d\n", ft_recursive_power(-5, 2));
	printf("-5**3 %d\n", ft_recursive_power(-5, 3));
	printf("0**0 %d\n", ft_recursive_power(0, 0));
	printf("0**2 %d\n", ft_recursive_power(0, 2));
	printf("4**-2 %d\n", ft_recursive_power(4, -2));
	printf("2**10 %d\n", ft_recursive_power(2, 10));
}

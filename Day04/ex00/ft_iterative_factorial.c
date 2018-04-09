#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int f;
	int i;

	if (nb >= 0 && nb <= 12)
	{
		f = 1;
		i = 1;
		while (i <= nb)
		{
			f *= i;
			i++;
		}
		return (f);
	}
	else
		return (0);
}

int main()
{
	printf("5 %d\n", ft_iterative_factorial(5));
	printf("0 %d\n", ft_iterative_factorial(0));
	printf("-5 %d\n", ft_iterative_factorial(-5));
	printf("12 %d\n", ft_iterative_factorial(12));
	printf("13 %d\n", ft_iterative_factorial(13));
}

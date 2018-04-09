#include <stdio.H>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}

int main()
{
	printf("5 %d\n", ft_recursive_factorial(5));
	printf("0 %d\n", ft_recursive_factorial(0));
	printf("-5 %d\n", ft_recursive_factorial(-5));
	printf("12 %d\n", ft_recursive_factorial(12));
	printf("13 %d\n", ft_recursive_factorial(13));
}

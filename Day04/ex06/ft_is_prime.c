#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
		if (nb % i++ == 0)
			return (0);
	return (1);
}

int	main()
{
	for (int i = 0; i <= 100; i++)
		if (ft_is_prime(i))
		   	printf("%d is prime\n", i);
	printf("%d %d\n", -2495, ft_is_prime(-2495));
}

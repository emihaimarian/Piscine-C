#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0 || index == 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main()
{
	for (int i = -1; i <= 10; i++)
		printf("%d: %d\n", i, ft_fibonacci(i));
}

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i * i < nb)
		i += 1;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

int	main()
{
	printf("%d: %d\n", 64, ft_sqrt(64));
	printf("%d: %d\n", 4194304, ft_sqrt(4194304));
	printf("%d: %d\n", 0, ft_sqrt(0));
	return (0);
}

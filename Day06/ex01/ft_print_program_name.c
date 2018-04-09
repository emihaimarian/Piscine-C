#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*(str++));
}

int	main(int argc, char **argv)
{
	argc = 1;
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}

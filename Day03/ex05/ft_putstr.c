#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	if (*str != '\0')
	{
		ft_putchar(*str);
		ft_putstr(str + 1);
	}
}

int main()
{
	ft_putstr("abcdefgh");
	return(0);
}

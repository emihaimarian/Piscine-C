#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		ft_putchar(str[index++]);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
			ft_putchar(nb + '0');
	}
}

int main()
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(3000000000);
	ft_putchar('\n');
	ft_putnbr(1);
	ft_putchar('\n');
	ft_putnbr(-50);
	ft_putchar('\n');
	return(0);
}

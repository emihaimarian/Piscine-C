#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char x, char y, char a, char b)
{
	while (a <= 57)
	{
		if (b < 58)
		{
			ft_putchar(x);
			ft_putchar(y);
			ft_putchar(' ');
			ft_putchar(a);
			ft_putchar(b);
			if(!(x == 57 && y == 56 && a == 57 && b == 57))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		if(b++ >= 57)
		{
			b = 48;
			a++;
		}
	}
}

void	ft_print_comb2(void)
{
	char x;
	char y;
	char a;
	char b;

	x = 48;
	y = 48;
	a = x;
	b = y + 1;
	while (x <= 57)
	{
		a = x;
		b = y + 1;
		ft_print(x, y, a, b);
		if (y++ >= 57)
		{
			y = 48;
			x++;
		}
	}
}

int main()
{
	ft_print_comb2();
	return (0);
}

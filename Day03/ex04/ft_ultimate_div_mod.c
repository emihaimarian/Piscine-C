#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

int main()
{
	int a, b;

	a = 30;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
	return (0);
}

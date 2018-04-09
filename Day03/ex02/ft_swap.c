#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a, b;
	a = 10;
	b = 30;

	ft_swap(&a, &b);
	printf("%d %d", a, b);
	return (0);
}

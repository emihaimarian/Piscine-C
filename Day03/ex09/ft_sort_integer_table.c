#include <stdio.h>
#include <stdlib.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int min;
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		min = 1;
		while (j <= size)
		{
			if (tab[j] < tab[min])
				min =j;
			j++;
		}
		temp = tab[i];
		tab[i] = tab[min];
		tab[min] = temp;
		i++;
	}
}

void	print_table(int *tab, int size)
{
	int i;

	i = 0;
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int main()
{
	int tab[] = {-12, 1, -32151, 1023145};
	print_table(tab, 4);
	ft_sort_integer_table(tab, 4);
	print_table(tab, 4);
	return (0);
}

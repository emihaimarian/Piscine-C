#include <stdio.h>

int		ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str = str + 1;
	}
	return (size);
}
int main()
{
	char str[] = "abcdefg";
	int len;

	len = ft_strlen(str);

	printf("Length of |%s| is |%d|\n", str, len);
	return (0);
}

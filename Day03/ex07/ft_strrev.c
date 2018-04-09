#include <stdio.h>

char	*ft_strrev(char *str)
{
	char temp_char;
	int length;
	int n;

	n = 0;
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	while (n < length /2)
	{
		temp_char = str[n];
		str[n] = str[length - n - 1];
		str[length - n -1] = temp_char;
		n++;
	}
	return (str);
}

int main()
{
	char s[100] = "123456";
	printf("%s\n", ft_strrev(s));
	return (0);
}

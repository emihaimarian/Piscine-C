#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	long long	i;
	long long	s;
	long long	rez;

	i = 0;
	s = 1;
	rez = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || str[i] == 32)
		i++;
	if (str[i] == '-')
		s = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		rez = rez * 10 + str[i] - '0';
		if (rez < 0 && (s == 1))
			return (-1);
		else if (rez < 0 && (s == -1))
			return (0);
		i++;
	}
	return (rez * s);
}

int main()
{
   int val;
   char str[20];
   
   strcpy(str, "98993489");
   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   strcpy(str, "tutorialspoint.com");
   val = atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);

   return(0);
}

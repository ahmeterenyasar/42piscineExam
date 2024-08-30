int	ft_atoi(const char *str)
{
	int i = 0;

	int sign;
	int result;

	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
	{
		i++;
	}
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (str[i] && (str[i] > '0' && str[i] < '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return sign * result;
}

#include <stdio.h>
int main()
{
	char a[] = "--++542";
	printf("%d", ft_atoi(a));
}

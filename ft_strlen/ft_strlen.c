int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

#include <stdio.h>
int main()
{
	int a = ft_strlen("eren");
	printf("%d", a);
}

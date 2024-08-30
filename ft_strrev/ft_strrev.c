char	*ft_strrev(char *str)
{
	int i = 0;
	char *arr;
	char temp;
	int j = 0;

	while(str[j])
	{
		j++;
	}

	j--;
	while (i < j)
	{
	        temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return str;
}

#include <stdio.h>
int main()
{
	char ar[] = "eren";
	char *res = ft_strrev(ar);
	printf("%s", res);
}

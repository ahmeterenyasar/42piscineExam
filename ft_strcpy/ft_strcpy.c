char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return s1;
}

#include <stdio.h>
int main()
{
	char str[] = "eren";
	char cpy[] = "yasar";

	char *res = ft_strcpy(str, cpy);
	printf("%s", res);
}

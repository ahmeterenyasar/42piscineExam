#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *dup;
	int i = 0;

	while (src[i])
	{
		i++;
	}
	dup = (char *)malloc((i + 1) * sizeof(char));
	if (!dup)
	{
		return (NULL);
	}
	dup[i] = '\0';
	int j = 0;
	while (j <= i)
	{
		dup[j] = src[i];
		i--;
		j++;
	}
	return dup;
}

#include <stdio.h>
int main()
{
	printf("%s", ft_strdup("eren"));
}

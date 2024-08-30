#include <unistd.h>

int atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while (s[i])
	{
		while ((s[i] >= 9 || s[i]  <= 13) && s[i] == 32)
		{
			i++;
		}
		if (s[i] == '-' || s[i] == '+')
		{
			if (s[i] == '-')
			{
				sign = -1;
			}
			i++;
		}
		while (s[i] >= '0' && s[i] <= '9')
		{
			res = (res*10) + (s[i] - '0');
			i++;
		}
		return res * sign;
	}
}

#include <stdio.h>
int main()
{
	char a[] = "-+-123--123";
	printf("%d", atoi(a));
}

int i_fact(int nb)
{
	int res = 1;
	if (nb < 0)
	{
		return 0;
	}
	if (nb <= 1)
	{
		return 1;
	}
	while (nb > 1)
	{
		res = res * nb;
		nb--;
	}
}

#include <stdio.h>

int main()
{
	printf("%d", i_fact(0));
}

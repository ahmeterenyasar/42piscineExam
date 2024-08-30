int r_pow(int nb, int pow)
{
	if (pow < 0)
	{
		return 0;
	}
	if (pow < 1)
	{
		return 1;
	}
	if (pow >= 1)
	{
		return (nb * r_pow(nb, pow-1));
	}
}

#include <stdio.h>
int main()
{
	printf("%d", r_pow(2,3));
}

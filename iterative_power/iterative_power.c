int i_pow(int nb, int pow)
{
	if (pow < 0)
	{
		return 0;
	}
	if (pow < 1)
	{
		return 1;
	}
	int res = 1;
	while (pow >= 1)
	{
		res = res * nb;
		pow--;
	}
	return res;
}

#include <stdio.h>
int main()
{
	printf("%d", i_pow(2,3));
}


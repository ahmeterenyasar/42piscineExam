int fib(int nb)
{
	if (nb < 0)
	{
		return 0;
	}
	if (nb < 2)
	{
		return nb;
	}
	if (nb >= 2)
	{
		return (fib(nb-2) + fib(nb-1));
	}
}

#include <stdio.h>
int main()
{
	printf("%d", fib(7));
}

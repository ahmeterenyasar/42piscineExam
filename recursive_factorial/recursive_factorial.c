#include <unistd.h>

int r_fact(int nb)
{
	if (nb < 0)
	{
		return 0;
	}
	if (nb <= 1)
	{
		return 1;
	}
	if (nb > 1)
	{
		return (nb * r_fact(nb-1));
	}
}

#include <stdio.h>
int main()
{
	printf("%d", r_fact(5));
}

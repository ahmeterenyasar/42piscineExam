#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int res = 0;
		if (argv[2][0] == '+')
		{
			res = atoi(argv[1]) + atoi(argv[3]);
			printf("%d", res);
		}
		else if (argv[2][0] == '-')
		{
			res = atoi(argv[1]) - atoi(argv[3]);
			printf("%d", res);
		}
		else if (argv[2][0] == '/')
		{
			res = atoi(argv[1]) / atoi(argv[3]);
			printf("%d", res);
		}
		else if (argv[2][0] == '*')
		{
			res = atoi(argv[1]) * atoi(argv[3]);
			printf("%d", res);
		}
		else if (argv[2][0] == '%')
		{
			res = atoi(argv[1]) % atoi(argv[3]);
			printf("%d", res);
		}
	}
	printf("\n");
	return 0;
}

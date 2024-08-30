#include <unistd.h>

int main(int argc, char **argv)
{
	int counter = 0;
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			counter = argv[1][i] - 'a';
			while (counter > -1)
			{
				write(1, &argv[1][i], 1);
				counter--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

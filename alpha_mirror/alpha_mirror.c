#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		char a;
		while(argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				a = 'z' - (argv[1][i] - 'a');
				write (1, &a, 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				a = 'Z' - (argv[1][i] - 'A');
				write (1, &a, 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return 0;
}

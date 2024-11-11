#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int print = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				print = argv[1][i] - 'A' + 1;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				print = argv[1][i] - 'a' + 1;
			else
				print = 1;
			while (print)
			{
				write(1, &argv[1][i], 1);
				print--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
#include <unistd.h>

int	main(int argc, char **argv)
{
	unsigned char seen[256] = {0};
	int i = 0;
	int j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (seen[(unsigned char)argv[1][i]] == 0)
			{
				write(1, &argv[1][i], 1);
				seen[(unsigned char)argv[1][i]] = 1;
			}
			i++;
		}
		while (argv[2][j])
		{
			if (seen[(unsigned char)argv[2][j]] == 0)
			{
				write(1, &argv[2][j], 1);
				seen[(unsigned char)argv[2][j]] = 1;
			}
			j++;
		}
	}
	write(1, "\n", 1);
}
#include <unistd.h>

int main (int argc, char **argv)
{
	int	i = 0;
	int j = 0;

	if (argc == 2)
	{
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i++;
		j = i;
		while (argv[1][j] && (argv[1][j] != ' ' && argv[1][j] != '\t'))
			j++;

		while (i < j)
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

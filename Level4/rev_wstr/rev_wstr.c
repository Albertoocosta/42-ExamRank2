#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac == 2)
	{
		while (av[1][i])
			i++;
		if (!av[1][i])
		{
			i--;
			while (av[1][i])
			{	
				while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
					i--;
				while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
					i--;
				j = i + 1;
				while (av[1][j] && av[1][j] != ' ' && av[1][j] != '\t')
				{
					write (1, &av[1][j], 1);
					j++;
				}
				if (i > 1)
					write (1, " ", 1);
			}
		}
	}
	write (1, "\n", 1);
}
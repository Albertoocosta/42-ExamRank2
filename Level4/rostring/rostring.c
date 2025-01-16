#include <unistd.h>

int main (int ac, char **av)
{
	int i = 0;
	int j;

	if (ac > 1)
	{
		while(av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		j = i;
		while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			i++;
		while(av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
			i++;
		if (av[1][i])
		{
			while(av[1][i])
			{
				if ((av[1][i] == ' ' || av[1][i] == '\t'))
				{
					while (av[1][i] == ' ' || av[1][i] == '\t')
						i++;
					if (av[1][i])
						write(1, " ", 1);
				}
				else
				{
					write (1, &av[1][i], 1);
					i++;
				}
			}
			write(1, " ", 1);
		}
		while (av[1][j] && av[1][j] != ' ' && av[1][j] != '\t')
		{
			write (1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}

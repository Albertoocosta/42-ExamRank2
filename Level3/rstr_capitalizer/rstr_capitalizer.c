#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	int index = 1;

	if (ac > 1)
	{
		while (index <= ac)
		{
			i = 0;
			while(av[index][i])
			{
				if (av[index][i] >= 'A' && av[index][i] <= 'Z')
					av[index][i] += 32;
				if ((av[index][i] >= 'a' && av[index][i] <= 'z') && 
						(av[index][i + 1] == ' ' || av[index][i + 1] == 0))
					av[index][i] -= 32;
				write (1, &av[index][i], 1);
				if (av[index][i + 1] == 0)
					write(1, "\n", 1);
				i++;
			}
			if ((index + 1) == ac)
				break;	
			index++;
		}
	}
	else
	{
		write(1, "\n", 1);
	}
}
#include <unistd.h>

int	atoimini(char *str)
{
	int i = 0;
	int number = 0;

	while(str[i])
	{
		number = (number * 10) + (str[i] - '0'); 
		i++;
	}
	return (number);
}


void	print_hex(int nbr)
{
	char *base = "0123456789abcdef";

	if (nbr > 15)
	{
		print_hex(nbr / 16);
		print_hex(nbr % 16);
	}
	if (nbr <= 15)
		write(1, &base[nbr], 1);
}

int	main(int ac, char **av)
{
	int number;
	if (ac == 2)
	{
		number = atoimini(av[1]);
		print_hex(number);
	}
	write (1, "\n", 1);
}
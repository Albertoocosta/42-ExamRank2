#include <unistd.h>

int ft_atoi(char *str)
{
	int	i = 0;
	int res = 0;
	
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}
int is_prime(int num)
{
	if (num <= 1)
		return (0);

	int i = 2;
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void putnbr(int nbr)
{
	char digit;
	if (nbr > 9)
		putnbr(nbr / 10);
	digit = nbr % 10 + '0';
	write (1, &digit, 1);
}


int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int 	nbr= ft_atoi(argv[1]);
		int		sum = 0;

		while (nbr > 0)
		{
			if(is_prime(nbr))
				sum += nbr;
			nbr--;
		}
		putnbr(sum);
	}
	if (argc != 2 )
		putnbr(0);
	write(1, "\n", 1);
}
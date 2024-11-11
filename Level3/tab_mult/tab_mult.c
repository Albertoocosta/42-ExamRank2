#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '-')
			sign = -sign;
		if (str[i] == '+' || str[i] == '-')
			i++;
		while (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
	}
	return (result * sign);
}

void putnbr(int nbr)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		putnbr(-nbr);
	}
	else if (nbr >= 10)
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int main(int argc, char **argv)
{
	int i = 1;
	int nbr;
	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		while (i < 10)
		{
			ft_putchar(i  + '0');
			write(1, " x ", 3);
			putnbr(nbr);
			write(1, " = ", 3);
			putnbr(nbr * i);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
}
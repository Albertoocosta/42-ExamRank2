#include <unistd.h>
#include <stdlib.h>

int ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return nbr;
}

int	*ft_rrange(int start, int end)
{
	int len = abs(end - start) + 1;
	int *result = (int *)malloc(sizeof(int) * len);
	int count = 0;

	result[count] = end;

	while (start < end)
	{
		count++;
		end--;
		result[count] = end;
	}
	return (result);
}
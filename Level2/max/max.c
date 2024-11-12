#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	if (!tab || len == 0)
		return (0);
	
	unsigned int i = 0;
	int big = tab[i];
	while (i < len)
	{
		if (big < tab[i])
			big = tab[i];
		i++;
	}
	return (big);
}
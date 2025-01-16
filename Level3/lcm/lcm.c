#include <unistd.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int result = 0;
	if (a == 0 || b == 0)
		return(0);
	if (a > b)
		result = a;
	if (a < b)
		result = b;
	while (1)
	{
		if (result % a == 0 && result % b == 0)
			return (result);
		result++;
	}
	
}
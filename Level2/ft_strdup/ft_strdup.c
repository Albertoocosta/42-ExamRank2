#include <unistd.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char *dst;
	int	i = 0;
	
	while (src[i])
		i++;
	dst = malloc(sizeof(char) * i);
	i = 0;
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
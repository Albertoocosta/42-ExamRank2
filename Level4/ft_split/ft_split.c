#include <unistd.h>
#include <stdlib.h>

char *ft_strncpy(char *dst, char *src, int n)
{
	int i = 0;
	while(i < n && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i]= 0;
	return (dst);
}

char **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int words = 0;
	while(str[i])
	{
		while (str[i] && (str[i] == ' ' ||  str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			words++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	char **output = (char **)malloc(sizeof(char *) * (words + 1));
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' ||  str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			output[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(output[k], &str[j], i - j);
			k++;
		}
	}
	output[k] = NULL;
	return (output);
} 
#include <stdio.h>
int main()
{
     char *str = "divida aqui pra testar";
     char **result = ft_split(str);
     int i = 0;
     while(result[i])
     {
        printf("Palavra %d: %s\n", i, result[i]);
    	i++;
     }
     return(0);
}
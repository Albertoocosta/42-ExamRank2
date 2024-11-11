#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int op1 = 0;
	int op2 = 0;
	int result = 0;
	if (argc == 4)
	{
		op1 = atoi(argv[1]);
		op2 = atoi(argv[3]);

		if (argv[2][0] == '*')
			result = op1 * op2;
		else if (argv[2][0] == '+')
			result = op1 + op2;
		else if (argv[2][0] == '-')
			result = op1 - op2;
		else if (argv[2][0] == '/')
			result = op1 / op2;
		else if (argv[2][0] == '%')
			result = op1 % op2;
		printf("%d\n", result);
	}
	else
		write(1, "\n", 1);
}
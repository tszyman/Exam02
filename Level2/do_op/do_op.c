#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		a;
	int		b;
	char	*op;
	int		res;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		op = argv[2];
		b = atoi(argv[3]);
		if (*op == '+')
			res = a + b;
		else if (*op == '-')
			res = a - b;
		else if (*op == '*')
			res = a * b;
		else if (*op == '/')
			res = a / b;
		else if (*op == '%')
			res = a % b;
		else
			{
				write (1, "\n", 1);
				return (0);
			}
		printf("%d\n", res);
	}
	else
		write (1, "\n", 1);
}
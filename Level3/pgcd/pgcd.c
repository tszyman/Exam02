#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	a;
	int	b;
	int denom;
	int res;

	denom = 1;
	res = 1;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		while (denom <= a && denom <= b)
		{
			if ((a % denom == 0) && (b % denom == 0))
				res = denom;
			denom++;
		}
		printf("%d\n", res);
	}
	else
		write (1, "\n", 1);
}
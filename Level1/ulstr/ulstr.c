#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*c;

	c = argv[1];
	if (argc == 2)
	{
		while (*c != '\0')
		{
			if (*c >= 65 && *c <= 90)
				*c += 32;
			else if (*c >= 97 && *c <= 122)
				*c -= 32;
			write(1, c, 1);
			c++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
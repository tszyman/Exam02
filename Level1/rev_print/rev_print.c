#include <stdio.h>
#include <unistd.h>

void	f_putc(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	char	*c;
	int		i;

	if (argc == 2)
	{
		c = argv[1];
		i = 0;
		while (c[i] != '\0')
		{
			i++;
		}
		while (i > 0)
		{
			f_putc(c[i-1]);
			i--;
		}
		f_putc('\n');
	}
	else
	{
		f_putc('\n');
	}
}

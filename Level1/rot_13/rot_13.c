#include <unistd.h>

int	ft_rot(int c)
{
	int	i;
	
	i = 0;
	if (c >= 65 && c <= 90)
	{
		i = (c - 65 + 13) % 26 + 65;
	}
	else if (c >= 97 && c <= 122)
	{
		i = (c - 97 + 13) % 26 + 97;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	char	*c;

	if (argc == 2)
	{
		c = argv[1];
		while (*c != '\0')
		{
			if (((*c >= 65 && *c <= 90) || (*c >= 97 && *c <= 122)))
			{
				*c = ft_rot(*c);
				write(1, c, 1);
			}
			else
				write(1, c, 1);
			c++;
		}
		write (1, "\n", 1);
	}
	else
	{
		write (1, "\n", 1);
	}
	return (0);
}
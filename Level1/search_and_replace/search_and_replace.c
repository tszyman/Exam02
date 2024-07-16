#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	char	*str;
	char	*repl;
	char	*new;

	str = argv[1];
	repl = argv[2];
	new = argv[3];

	if (argc == 4)
	{
		if (ft_strlen(repl) > 1 || ft_strlen(new) > 1)
		{
			write(1, "\n", 1);
			exit(0);
		}
		else
			{
			while (*str != '\0')
			{
				if (*str == *repl)
				{
					write(1, new, 1);
				}
				else
					write(1, str, 1);
				str++;
			}
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
}
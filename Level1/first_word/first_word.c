#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;

	if (argc == 2)
	{
		str = argv[1];
		while (*str == ' ' || *str == '\0')
			if (*str == '\0')
				break;
			else
				str++;
		while (*str != ' ' && *str != '\0' && *str)
		{
			write (1, str, 1);
			str++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
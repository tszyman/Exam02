#include <unistd.h>

int	main(int argc,char *argv[])
{
	char	*c;
	int		s;

	c = argv[1];
	if(argc == 2)
	{
		s = 0;
		while (*c != '\0')
		{
			if (*c != ' ')
			{
				s = 1;
			}
			if (s == 1)
			{
				if (*c != ' ')
				{
					write(1, c, 1);
				}
				else
				{
					break;
				}
			}
			c++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
}
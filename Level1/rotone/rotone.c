#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*c;

	if (argc == 2)
	{
		c = argv[1];
		while (*c != '\0')
		{
			if ((*c >= 65) && (*c <= 90))
			{
				if (*c == 90)
				{
					*c = 65;
				}
				else 
				{
					*c = *c + 1;
				}
			}
			else if ((*c >= 97) && (*c <= 122))
			{
				if (*c == 122)
				{
					*c = 97;
				}
				else
				{
					*c = *c + 1;
				}
			}
			write(1, c, 1);
			c++;
		}
		write(1,"\n",1);
	}
	else
	{
		write(1,"\n",1);
	}
}
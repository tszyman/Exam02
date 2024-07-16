#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	char	*c;
	int		i;

	if (argc == 2)
	{
		c = argv[1];
	i=1;
	while (*c != '\0')
		{
			if ((*c >= 65) && (*c <= 90))
			{
				i = *c-64;
			}
			else if ((*c >= 97) && (*c <= 122))
			{
				i = *c-96;
			}
			else
			{
				i = 1;
			}
			while (i>0)
			{
				write(1,c,1);
				i--;
			}
			c++;
		}
		write(1,"\n",1);
	}
	else 
	{
		write(1,"\n",1);
	}
}

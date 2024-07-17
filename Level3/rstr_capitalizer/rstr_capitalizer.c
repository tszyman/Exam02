#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char *str;
	int	strnum;
	int i;
	
	strnum = 1;
	if (argc >= 2)
	{
		while (strnum <= argc - 1)
		{
			str = argv[strnum];
			i = 0;
			while (str[i] != '\0')
			{
				if ((str[i + 1] == ' ' || str[i + 1] == '\0'))
				{
					if ((str[i] >= 97 && str[i]<=122))
						str[i] -= 32;
					write(1, &str[i], 1);
				}
				else if (str[i] >= 65 && str[i]<=90)
				{
					str[i] += 32;
					write(1, &str[i], 1);
				}
				else
					write(1, &str[i], 1);
				i++;
			}
			write(1, "\n", 1);
			strnum++;
		}
	}
	else
		write(1, "\n", 1);
}
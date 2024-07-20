#include <unistd.h>
#include <stdio.h>

int	ft_srcstr(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	if (*s1 == '\0')
		return (1);
	while (s2[i] != '\0')
	{
		if (s1[j] == s2[i])
		{
			if (s1[j+1] == '\0')
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}


int	main(int argc, char *argv[])
{
	char	*s1;
	char	*s2;
	
	if (argc == 3)
	{
		s1 = argv[1];
		s2 = argv[2];
		if (ft_srcstr(s1, s2) > 0)
		{
			write (1, "1", 1);
		}
		else
		{
			write (1, "0", 1);
		}
		write (1, "\n", 1);
	}
	else
		write (1, "\n", 1);
}
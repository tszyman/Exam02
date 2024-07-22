#include <unistd.h>

int	ft_atoi(const char *str)
{
	char	*s;
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	s = (char *)str;
	while (*s == ' ' || *s == '\0')
		if (*s == '\0')
			break;
		else
			s++;
	if (*s == '-' || *s == '+')
		{
			if (*s == '-')
				sign = -1;
			s++;
		}
	while (*s)
		{
			if (*s >= '0' && *s <= '9')
				res = 10 * res + (*s - '0');
			else
				return (res*sign);
			s++;
		}
	return (res*sign);
}

// #include <stdio.h>
// int main(int argc, char *argv[])
// {
// 	if (argc == 2)
// 	{
// 		printf("str: %s\n", argv[1]);
// 		printf("int: %d\n", ft_atoi(argv[1]));
// 	}
// 	else
// 		return(0);
// }
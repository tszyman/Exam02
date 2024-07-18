#include <unistd.h>
int	ft_atoi(char *str)
{
	unsigned int	res;
	
	res = 0;
	while (*str)
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res);
}

int	ft_is_prime(unsigned int n)
{
	unsigned int	i;

	i = 2;
	if (n < 2)
		return (0);
	while (n >= 2 && i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void ft_putnbr(unsigned int n)
{
	char	chn;

	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		chn = n + 48;
		write(1, &chn, 1);
	}
}

#include <stdio.h>
int	main(int argc, char *argv[])
{
	unsigned int	num;
	unsigned int	psum;

	num = 0;
	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		psum = 0;
		while (num > 0)
		{
			if (ft_is_prime(num))
				psum += num;
			num--;
		}
		ft_putnbr(psum);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
	return (0);
}
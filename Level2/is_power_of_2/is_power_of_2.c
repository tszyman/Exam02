//#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	unsigned int	result;
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < 32)
	{
		result = 1 << i;
		if (n == result)
			return (1);
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	int	n;

// 	n = 2147483647;
// 	printf("n: %d\n", n);
// 	if (is_power_of_2(n))
// 		printf("n is power of 2\n");
// 	else
// 		printf("n is NOT a power of 2\n");
// }
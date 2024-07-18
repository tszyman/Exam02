#include <stdlib.h>
//#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int	len;
	int	*arr;
	int i;
	int sign;

	len = end - start;
	if (len < 0)
		len *= -1;
	len++;
	i =0;
	sign = 1;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
	{
		return (0);
	}
	
	if (start < end)
		sign = -1;
	while (i < len)
	{
		arr[i] = end;
		end = end + sign;
		i++;
	}
	return (arr);
}

// int	main(void)
// {
// 	int	*arr;
// 	int	i;

// 	i = 0;
// 	arr = ft_rrange(-1, 2932);
// 	while (i < 24)
// 	{
// 		printf("arr [%d]: %d\n", i, *arr);
// 		i++;
// 		arr++;
// 	}
// }

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		i;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) *(len + 1));
	if (!dest)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>

// int main(void)
// {
// 	char *str = "tomasz";
// 	char *dest;

// 	printf("src: %s\n", str);
// 	dest = ft_strdup(str);
// 	printf("dest: %s\n", dest);
// }
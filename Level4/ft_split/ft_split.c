#include <stdlib.h>
#include <stdio.h>

int	ft_wrdcnt(char *s)
{
	int	wrdcnt;
	int	flag;

	flag = 0;
	wrdcnt = 0;
	while (*s)
	{
		if ((*s != ' ' && *s != '\t' && *s != '\n') && flag == 0)
		{
			flag = 1;
			wrdcnt++;
		}
		else if (*s == ' ' || *s == '\t' || *s == '\n')
			flag = 0;
		s++;
	}
	return (wrdcnt);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_wrddup(char *s, int start, int end)
{
	char	*wrd;
	int		i;

	i = 0;
	wrd = malloc((end - start + 1) * sizeof(char));
	if (!wrd)
		return (0);
	while (start < end)
		*(wrd + i++) = *(s + start++);
	*(wrd + i) = '\0';
	return (wrd);
}

char	**ft_split(char *str)
{
	char	**strs;
	int		i;
	int		j;
	int		ind;

	strs = (char **)malloc((ft_wrdcnt(str) + 1) * sizeof(char *));
	if (!str || !(strs))
		return (0);
	i = 0;
	j = 0;
	ind = -1;
	while (i <= ft_strlen(str))
	{
		if ((*(str + i) != ' ' && *(str + i) != '\t' && *(str + i) != '\n') && ind < 0)
			ind = i;
		else if (((*(str + i) == ' ' || *(str + i) == '\t' || *(str + i) == '\n' || *(str + i) == '\0')) && ind >= 0)
		{
			*(strs + j++) = ft_wrddup(str, ind, i);
			ind = -1;
		}
		i++;
	}
	strs[j] = 0;
	return (strs);
}

// // Function to free the memory allocated by ft_split
// void free_split(char **split) {
//     int i = 0;
//     while (split[i] != NULL) {
//         free(split[i]);
//         i++;
//     }
//     free(split);
// }

// int main() {
//     char str[] = "This is	a test string to split";
    
//     // Call the ft_split function
//     char **words = ft_split(str);
    
//     if (words == NULL) {
//         fprintf(stderr, "Error: ft_split returned NULL\n");
//         return 1;
//     }
    
//     // Iterate through the array of strings and print each element using a while loop
//     int i = 0;
//     while (words[i] != NULL) {
//         printf("Word %d: %s\n", i, words[i]);
//         i++;
//     }
//     // Free the memory allocated by ft_split
//     free_split(words);
    
//     return 0;
// }
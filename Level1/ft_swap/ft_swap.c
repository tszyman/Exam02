void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>

// int main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 5;
// 	b = 10;
// 	printf("Before swap a: %d\n", a);
// 	printf("Before swap a(address): %p\n", &a);
// 	printf("Before swap b: %d\n", b);
// 	printf("Before swap b(address): %p\n", &b);
// 	ft_swap(&a, &b);
// 	printf("**********ft_swap***********\n");
// 	printf("After swap a: %d\n", a);
// 	printf("After swap a(address): %p\n", &a);
// 	printf("After swap b: %d\n", b);
// 	printf("After swap b(address): %p\n", &b);
// 	return (0);
// }
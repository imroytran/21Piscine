#include <stdio.h>

int	*ft_range(int min, int max);

int main()
{
	int *arr;
	int i;
	
	i = 0;
	arr = ft_range(2, 2);
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return (0);
}

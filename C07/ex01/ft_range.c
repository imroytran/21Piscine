#include <stdlib.h>

int 	*ft_range(int min, int max)
{
	int len;
	int *arr;

	if (min > max || min == max)
		return (0);
	else
	{
		len = max - min;
		arr = malloc(sizeof(*arr) * len);
		while (len--)
			arr[len] = --max;
		
		return (arr);
	}
}

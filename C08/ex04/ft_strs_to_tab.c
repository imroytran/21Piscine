#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_strcpy(char *src)
{
	char *dest;

	while (*src)
		*dest++ = *src++;
	*dest = '\0'
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *arc;
	int 		i;

	if (!(arc = (t_stock_str *)malloc(sizeof(arc) * (ac + 1))))
		return (0);
	i = 0;
	while (av[i] != '\0' && i < ac)
	{
		arc[i].size = ft_strlen(av[i]);
		arc[i].str = av[i];
		arc[i].copy = ft_strcpy(av[i]);
		i++;
	}
	arc[i].size = 0;
	arc[i].str = 0;
	arc[i].copy = 0;
	return (arc);
}

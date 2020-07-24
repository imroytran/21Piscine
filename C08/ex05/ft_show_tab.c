#include <unistd.h>
#include "ft_stock_str.h"

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10){
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

void	ft_show_tab(struct s_stock_s *par)
{
	int i;

	i = 0;
	while (par[i].size != 0)
	{
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++:
	}
}

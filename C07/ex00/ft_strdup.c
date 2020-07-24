#include <stdlib.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (str[len]  != '\0')
		len++;
	return (len);
}
void	*ft_strncpy(char *dest, char *src, unsigned int len)
{
	while (len--)
		*dest++ = *src++;
	return (dest);
}
char	*ft_strdup(char *src)
{
	unsigned int len;
	char *dup;

	len = ft_strlen(src);
	if (!(dup = malloc(len + 1)))
		return NULL;
	ft_strncpy(dup, src, len);
	return (dup);
}

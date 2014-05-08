#include "libft.h"

char	*ft_strnew(size_t len)
{
	char *s;

	s = malloc(sizeof(char) * len + 1);
	if (!s)
		return (NULL);
	while (*s++)
		*s = 0;
	return (s);
}

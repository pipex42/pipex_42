#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char	*trunc;

	i = 0;
	trunc = ft_strnew(len);
	while (i <= len)
	{
		trunc[i] = s[start];
		i++;
		start++;
	}
	trunc[i] = 0;
	return (trunc);
}

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dest_len = ft_strlen(dest);
	i = dest_len;
	j = 0;
	src_len = ft_strlen(src);
	if (len < dest_len)
		return (len + src_len);
	else
	{
		while (src[j] && i < (len - 1))
			dest[i++] = src[j++];
		dest[i] = '\0';
		return (dest_len + src_len);
	}
}
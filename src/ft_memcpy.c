
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((char *)dest)[i] = ((char *)src)[i];
	return (dest);
}
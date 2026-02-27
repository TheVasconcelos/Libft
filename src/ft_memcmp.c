
#include <stddef.h>

int ft_memcmp(const void *dest, const void *src, size_t n)
{
    size_t      i;
    if (n == 0)
        return (0);
    i = 0;
    while (i < n - 1 && ((unsigned char *)dest)[i] == ((unsigned char *)src)[i])
        i++;
    return(((unsigned char *)dest)[i] - ((unsigned char *)src)[i]);
}
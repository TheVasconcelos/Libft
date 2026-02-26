#include <stddef.h>

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t dst_len;
    size_t src_len;

    dst_len = 0;
    src_len = 0;

    while (dst_len < dstsize && dst[dst_len])
        dst_len++;

    while (src[src_len])
        src_len++;

    if (dst_len == dstsize)
        return (dstsize + src_len);

    i = dst_len;
    j = 0;
    while (src[j] && (i + 1) < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }

    dst[i] = '\0';

    return (dst_len + src_len);
}
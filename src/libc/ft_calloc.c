
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char   *new;
    size_t         i;
    size_t         j;

    if (size != 0 && nmemb > SIZE_MAX / size)
        return(NULL);
    j = (nmemb*size);
    new = malloc(j);
    if (new == NULL)
        return (NULL);
    i = 0;
    while (j > 0)
    {
        new[i++] = 0;
        j--;
    }
    return(new);
}

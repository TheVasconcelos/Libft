
#include <stdlib.h>

char    *ft_strdup(const char *src)
{
    int     i;
    char    *new;

    i = 0;
    while (src[i])
        i++;
    
    new = malloc((i + 1) * sizeof(char));
    if (new == NULL)
        return (NULL);
    i = 0;
    while (src[i])
    {
        new[i] = src[i];
        i++;
    }
    new[i] = '\0';

    return (new);
}
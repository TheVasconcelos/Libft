#include <stddef.h>
#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t     i;
    size_t    counter;
    char            *new;

    i = 0;
    if (s == NULL)
        return (NULL);
    while (s[i])
        i++;
    if (start >= i || len == 0)
    {
        new = malloc(1);
        if (!new)
            return (NULL);
        new[0] = '\0';
        return (new);
    }
    new = malloc(len + 1);
    if (!new)
        return (NULL);
    i = start;
    counter = 0;
    while (counter < len && s[i])
    {   
        new[counter] = s[i]; 
        i++;
        counter++;
    }
    new[counter] = '\0';
    return (new);
}


#include <stdlib.h>

char    *ft_strchr(const char *s, int c)
{
    if (!s)
        return (NULL);
    while (*s)
    {
        if (*s == (unsigned char)c)
            return ((char *)s);
        s++;
    }
    if ((unsigned char)c == '\0')
        return((char *)s);
    return (NULL);
}

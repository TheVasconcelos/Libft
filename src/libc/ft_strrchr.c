#include <stddef.h>

char    *ft_strrchr(const char *s, int c)
{
    const char  *last;

    last = NULL;
    if (!s)
        return (NULL);
    while (*s)
    {
        if (*s == (unsigned char)c)
            last = s;
        s++;
    }
    if ((unsigned char)c == '\0')
        return((char *)s);
    return ((char *)last);
}

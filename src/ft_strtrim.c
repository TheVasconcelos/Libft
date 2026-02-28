#include <stdlib.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *new;
    size_t  i, f, j, len;
    int     k, found;

    if (!s1 || !set)
        return (NULL);
    if (ft_strlen(s1) == 0)
        return (ft_strdup(""));
    f = ft_strlen(s1) - 1;
    i = 0;
    while (s1[i])
    {
        k = 0;
        found = 0;
        while (set[k])
        {
            if (s1[i] == set[k])
                found = 1;
            k++;
        }  
        if (!found)
            break;
        i++;
    }
        while (f >= i)
    {
        k = 0;
        found = 0;
        while (set[k])
        {
            if (s1[f] == set[k])
                found = 1;
            k++;
        }  
        if (!found)
            break;
        f--;
    }  
    if (f < i)
        len = 0;
    else 
        len = f - i + 1;
    new = malloc (len + 1);
    if (new == NULL)
        return (NULL);
    j = 0;
    while (i <= f)
    {
        new[j] = s1[i];
        i++;
        j++;
    }
    new[j] = '\0';
    return (new);
}
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*result;
	size_t		i;
	size_t		size;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s) + 1;
	result = malloc(size);
	if (!result)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

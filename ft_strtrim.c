#include "libft.h"

static int	in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;

	if (!str || !set)
		return (NULL);
	start = 0;
	while (str[start] && in_set(str[start], set))
		start++;
	end = ft_strlen(str);
	while (end > start && in_set(str[end - 1], set))
		end--;
	return (ft_substr(str, start, end - start));
}

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*get_word(char const *s, char c, int *i)
{
	int		start;
	int		len;
	char	*word;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	len = *i - start;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, len + 1);
	return (word);
}

static void	free_split(char **result, int j)
{
	while (j > 0)
		free(result[--j]);
	free(result);
}

static int	fill_words(char **res, char const *s, char c, int words)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < words)
	{
		res[j] = get_word(s, c, &i);
		if (!res[j])
		{
			free_split(res, j);
			return (0);
		}
		j++;
	}
	res[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!fill_words(result, s, c, words))
		return (NULL);
	return (result);
}

/* int main(int argc, char const *argv[])
{
	char **res;


	res = ft_split("   ", ' ');

	int i = 0;
	while (res[i])
	{
		printf(">%s<\n", res[i]);
		i++;
	}
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return 0;
}
 */
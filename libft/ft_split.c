#include "libft.h"
#include <stdlib.h>

static size_t	count_words(const char *s, char c)
{
	size_t	count = 0;
	int		in_word = 0;

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

static char	*word_dup(const char *s, size_t start, size_t end)
{
	char	*word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, end - start + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i = 0, j = 0, start = 0;

	if (!s || !(result = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && start == 0)
			start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && start != 0)
		{
			result[j++] = word_dup(s, start, (s[i] == c ? i : i + 1));
			start = 0;
		}
		i++;
	}
	result[j] = NULL;
	return (result);
}

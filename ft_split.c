/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalinas <fsalinas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 20:46:33 by fsalinas          #+#    #+#             */
/*   Updated: 2026/10/09 21:44:35 by fsalinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (counter);
}

static char	*word_dup(char const *s, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_words(char **words, int count)
{
	int	i;

	i = 0;
	while (i < count)
		free(words[i++]);
	free(words);
}

static int	fill_words(char **words, char const *s, char c)
{
	int	i;
	int	start;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			words[count] = word_dup(s, start, i);
			if (!words[count])
				return (count);
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		count;
	int		filled;

	if (!s)
		return (NULL);
	count = word_counter(s, c);
	words = malloc(sizeof(char *) * (count + 1));
	if (!words)
		return (NULL);
	filled = fill_words(words, s, c);
	if (filled != count)
	{
		free_words(words, filled);
		return (NULL);
	}
	words[count] = NULL;
	return (words);
}

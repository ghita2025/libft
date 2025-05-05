/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstitou <gstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 02:14:41 by gstitou           #+#    #+#             */
/*   Updated: 2024/11/10 04:34:09 by gstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *str, char sep)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == sep))
			i++;
		if (str[i] && !(str[i] == sep))
			counter++;
		while (str[i] && !(str[i] == sep))
			i++;
	}
	return (counter);
}

int	len_word(char const *str, char sep)
{
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	while (str[i] && !(str[i] == sep))
	{
		counter++;
		i++;
	}
	return (counter);
}

char	*save_word(char const *str, char sep)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = len_word(str, sep);
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (str[i] && i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**free_array(char **ptr, int i)
{
	if (!ptr)
		return (NULL);
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ss;
	int		i;

	if (!s)
		return (NULL);
	ss = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!ss)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			ss[i] = save_word(s, c);
			if (!ss[i])
				return (free_array(ss, i));
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	ss[i] = NULL;
	return (ss);
}

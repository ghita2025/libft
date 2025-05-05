/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstitou <gstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:37:53 by gstitou           #+#    #+#             */
/*   Updated: 2024/11/10 05:15:22 by gstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

int	index_start(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	return (i);
}

int	index_end(const char *s1, const char *set)
{
	int	len;

	len = ft_strlen(s1) - 1;
	while (len >= 0 && is_set(s1[len], set))
		len--;
	return (len);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	int		len;
	char	*s2;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = index_start(s1, set);
	end = index_end(s1, set);
	i = 0;
	if (start > end)
		len = 0;
	else
		len = end - start + 1;
	s2 = malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1 + start, len + 1);
	return (s2);
}

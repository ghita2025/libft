/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstitou <gstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:29:02 by gstitou           #+#    #+#             */
/*   Updated: 2024/11/10 05:18:10 by gstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	ch;

	ch = (char)c;
	len = ft_strlen(s);
	if (ch == '\0')
		return ((char *)&s[len]);
	while (len--)
	{
		if (s[len] == ch)
			return ((char *)&s[len]);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstitou <gstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 16:14:06 by gstitou           #+#    #+#             */
/*   Updated: 2024/11/09 16:14:19 by gstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lensrc;
	size_t	lendst;
	size_t	i;

	lensrc = ft_strlen(src);
	lendst = 0;
	while (lendst < dstsize && dst[lendst] != '\0')
		lendst++;
	if (lendst >= dstsize)
		return (dstsize + lensrc);
	i = 0;
	while (src[i] && (lendst + i) < (dstsize - 1))
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}

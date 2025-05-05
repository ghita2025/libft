/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstitou <gstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:28:29 by gstitou           #+#    #+#             */
/*   Updated: 2024/11/10 05:21:01 by gstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	ch;
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)b;
	ch = (unsigned char)c;
	while (i < len)
	{
		s[i] = ch;
		i++;
	}
	return (b);
}

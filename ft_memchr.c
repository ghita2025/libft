/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstitou <gstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:28:42 by gstitou           #+#    #+#             */
/*   Updated: 2024/11/10 05:18:46 by gstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sc;
	unsigned char	ch;
	size_t			i;

	sc = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (sc[i] == ch)
			return (&sc[i]);
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	char s[] = "12034567";
// 	int c = 0;
// 	char *d = (char *)ft_memchr(s, c, 6);
// 	printf("%s", d);
// }
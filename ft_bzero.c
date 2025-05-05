/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstitou <gstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:29:40 by gstitou           #+#    #+#             */
/*   Updated: 2024/11/08 21:07:25 by gstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*src;
	size_t			i;

	i = 0;
	src = (unsigned char *)s;
	while (n--)
		*src++ = 0;
}
// int main(){
//     char s[]="12345";
// 	char s2[]="12345";
//     ft_bzero(NULL,5);
//     printf("jj %s",s);
// 	// bzero(NULL,5);
//     // printf("jj %sn\n",s2);

// }
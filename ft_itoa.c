/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstitou <gstitou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:13:29 by gstitou           #+#    #+#             */
/*   Updated: 2024/11/09 01:35:21 by gstitou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_len(int n)
{
	int	cnt;

	cnt = 1;
	if (n < 0)
		cnt++;
	while (n / 10)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	nb = n;
	len = count_len(nb);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (--len >= 0 && nb != 0)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n == 0)
		str[0] = '0';
	return (str);
}

// int	main(void)
// {
// 	printf(" %s", ft_itoa(-2147483648));
// }
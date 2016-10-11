/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkharif <rkharif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 17:41:05 by rkharif           #+#    #+#             */
/*   Updated: 2016/10/11 18:38:21 by rkharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_digitcount(int n)
{
	int		nb;

	nb = 0;
	while (n != 0)
	{
		n = n / 10;
		nb++;
	}
	return (nb);
}

char	*ft_itoa_err(int n)
{
	char	*str;

	if (n == 0)
	{
		str = ft_strnew(1);
		str[0] = '0';
		return (str);
	}
	else
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		digit;

	i = 0;
	if (n == 0 || n == -2147483648)
		return (ft_itoa_err(n));
	digit = ft_digitcount(n);
	str = malloc(sizeof(char) * digit + 1);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
		++i;
	}
	str[i + digit] = '\0';
	while (digit > 0)
	{
		str[i + digit - 1] = (n % 10) + 48;
		n = n / 10;
		digit--;
	}
	return (str);
}

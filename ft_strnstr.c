/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkharif <rkharif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 16:38:42 by rkharif           #+#    #+#             */
/*   Updated: 2016/03/09 16:49:34 by rkharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s2)
		return ((char *)s1);
	while (s1[i] && s2[j] && i < n)
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
		{
			i++;
			j = 0;
		}
	}
	if (!s2[j])
		return ((char *)s1 + i - j);
	return (0);
}

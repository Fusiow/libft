/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkharif <rkharif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 16:38:42 by rkharif           #+#    #+#             */
/*   Updated: 2016/10/17 16:30:49 by rkharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = ft_strlen(s2);
	if (n < j)
		return (NULL);
	if (!*s2)
		return ((char *)s1);
	while (s1[i] && i <= (n - j))
	{
		if (ft_strncmp(s1 + i, s2, j) == 0)
			return ((char *)s1 + i);
		++i;
	}
	return (0);
}

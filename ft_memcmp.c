/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkharif <rkharif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 17:19:05 by rkharif           #+#    #+#             */
/*   Updated: 2016/03/07 16:47:38 by rkharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*sp1;
	char	*sp2;

	sp1 = (char *)s1;
	sp2 = (char *)s2;
	while (s1 && s2 && *sp1 == *sp2 && n-- > 0)
	{
		sp1++;
		sp2++;
	}
	return ((unsigned char)*sp1 - (unsigned char)*sp2);
}
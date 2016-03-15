/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkharif <rkharif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 16:33:04 by rkharif           #+#    #+#             */
/*   Updated: 2016/03/09 14:19:12 by rkharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*strd;
	char	*strs;

	if (n)
	{
		strd = dst;
		strs = (char *)src;
		while (n-- > 0)
		{
			if ((*strd++ = *strs++) == c)
				return (dst);
		}
	}
	return (0);
}

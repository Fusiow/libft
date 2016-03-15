/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkharif <rkharif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/23 17:09:05 by rkharif           #+#    #+#             */
/*   Updated: 2016/03/07 16:40:27 by rkharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sp;

	sp = (char *)s;
	while (sp && *sp && *sp != (unsigned char)c && n-- > 0)
		sp++;
	if (!n || !*sp)
		return (0);
	return (sp);
}
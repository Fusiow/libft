/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkharif <rkharif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/25 04:12:42 by rkharif           #+#    #+#             */
/*   Updated: 2016/02/17 14:27:49 by rkharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *s;

	s = (unsigned char *)b;
	while (len-- > 0)
	{
		*s = (unsigned char)c;
		s++;
	}
	return (s);
}

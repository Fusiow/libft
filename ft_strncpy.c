/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkharif <rkharif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 17:01:13 by rkharif           #+#    #+#             */
/*   Updated: 2016/03/07 17:09:37 by rkharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	while (len-- > 0)
	{
		if (*src && src)
			*dst++ = *src++;
		if (!*src)
			*dst++ = 0;
	}
	*dst = 0;
	return (dst);
}

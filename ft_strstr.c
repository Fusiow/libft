/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkharif <rkharif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 15:36:40 by rkharif           #+#    #+#             */
/*   Updated: 2016/10/17 15:53:38 by rkharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	size_t	len;
	char	*ptr;

	if (!little || !*little)
		return ((char *)big);
	len = ft_strlen(little);
	i = 0;
	while (big[i])
	{
		if (ft_strncmp(big + i, little, len) == 0)
		{
			ptr = (char *)big + i;
			return (ptr);
		}
		i++;
	}
	return (0);
}

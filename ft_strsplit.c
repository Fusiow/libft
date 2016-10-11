/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkharif <rkharif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/11 16:05:47 by rkharif           #+#    #+#             */
/*   Updated: 2016/10/11 16:54:27 by rkharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		countword(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			++i;
		while (s[i] != c && s[i] != '\0')
			++i;
		if ((s[i] == c && s[i - 1] != c) || (s[i] != c && s[i + 1] == '\0'))
			++count;
	}
	return (count);
}

char	**filltab(char **tab, char const *s, char c)
{
	unsigned int		i;
	unsigned int		j;
	unsigned int		x;

	i = 0;
	j = 0;
	x = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			++i;
		j = i;
		while (s[j] != c && s[j] != '\0')
			++j;
		tab[x] = ft_strsub(s, i, j - i);
		i = j;
		++x;
	}
	tab[x] = NULL;
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;

	if ((tab = malloc(sizeof(char *) * (countword(s, c) + 1))) == NULL)
		return (NULL);
	tab = filltab(tab, s, c);
	return (tab);
}

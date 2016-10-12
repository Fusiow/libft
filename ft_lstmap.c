/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkharif <rkharif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 16:35:09 by rkharif           #+#    #+#             */
/*   Updated: 2016/10/12 16:42:29 by rkharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*newlist;

	if (lst)
	{
		newlist = lst;
		newlist->next = ft_lstmap(lst->next, f);
		return (newlist);
	}
	return (NULL);
}

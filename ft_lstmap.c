/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalinas <fsalinas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 23:30:51 by fsalinas          #+#    #+#             */
/*   Updated: 2026/10/12 13:34:15 by fsalinas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*newlst;
	void	*content;

	newlst = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		dest = ft_lstnew (content);
		if (!dest)
		{
			del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		if (!newlst)
			newlst = dest;
		else
			ft_lstadd_back(&newlst, dest);
		lst = lst->next;
	}
	return (newlst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsmets <gsmets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 19:18:48 by gsmets            #+#    #+#             */
/*   Updated: 2019/10/15 14:46:45 by gsmets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list	*alst;
	t_list	*newlst;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	tmp = (*f)(lst->content);
	if (!(newlst = ft_lstnew(tmp->content)))
		return (NULL);
	alst = newlst;
	lst = lst->next;
	while (lst)
	{
		tmp = (*f)(lst->content);
		if (!(newlst->next = ft_lstnew(tmp->content)))
			return (NULL);
		newlst = newlst->next;
		lst = lst->next;
	}
	return (alst);
}

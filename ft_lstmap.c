/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 23:27:12 by kboulkri          #+#    #+#             */
/*   Updated: 2023/05/25 17:55:13 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*ptr;

	if (!lst)
		return (NULL);
	tmp = ft_lstnew(f(lst->content));
	if (!tmp)
		return (0);
	ptr = tmp;
	lst = lst->next;
	while (lst)
	{
		tmp->next = ft_lstnew(f(lst->content));
		if (!tmp->next)
		{
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	tmp->next = NULL;
	return (ptr);
}

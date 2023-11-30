/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:48:18 by kboulkri          #+#    #+#             */
/*   Updated: 2023/05/25 17:54:32 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*bouffon;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		bouffon = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = bouffon;
	}
	*lst = NULL;
}

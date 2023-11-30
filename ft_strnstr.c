/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 23:02:59 by kboulkri          #+#    #+#             */
/*   Updated: 2023/05/17 20:08:30 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
	{
		return ((char *)big);
	}
	if (len == 0)
		return (0);
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j] && (i + j < len))
		{
			if (little[j + 1] == '\0')
				return ((char *)(&big[i]));
			j++;
		}
		i++;
	}
	return (0);
}

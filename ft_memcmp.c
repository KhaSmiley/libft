/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:06:02 by kboulkri          #+#    #+#             */
/*   Updated: 2023/05/21 18:58:56 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	unsigned int		i;

	s1 = p1;
	s2 = p2;
	i = 0;
	if (size == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && (i < size - 1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

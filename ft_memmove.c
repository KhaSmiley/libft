/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:41:33 by kboulkri          #+#    #+#             */
/*   Updated: 2023/05/25 16:58:02 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*d;
	unsigned char	*s;
	long			n;

	if (!dest && !src)
		return (NULL);
	n = size;
	d = dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		d = ft_memcpy(dest, src, n);
	}
	return (dest);
}

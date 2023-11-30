/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:08:20 by kboulkri          #+#    #+#             */
/*   Updated: 2023/05/21 18:57:18 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]))
	{
		start++;
	}
	while (ft_strchr(set, s1[end]))
	{
		end--;
	}
	str = ft_substr(s1, start, (end - start + 1));
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:34:10 by kboulkri          #+#    #+#             */
/*   Updated: 2023/05/23 16:47:24 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = ft_strlen(s);
	if (!s)
		return (NULL);
	while (j > -1)
	{
		if (s[j] == (unsigned char)c)
		{
			return ((char *)(&s[j]));
		}
		j--;
	}
	return (NULL);
}
// int main ()
// {
// 	char str[] = "Bonsoir comment tu vas ?";
// 	printf("%s\n", ft_strrchr(str, 't' + 256));
// 	return 0;
// }
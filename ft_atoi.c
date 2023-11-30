/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 22:10:01 by kboulkri          #+#    #+#             */
/*   Updated: 2023/05/17 19:12:11 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	i = 0;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == 32 || str[i] == 13)
	{
		i++;
	}
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * sign);
}

// int main()
// {
// 	char str[] = "\t\n\r\v\f  469 \n";
// 	printf("%d\n", ft_atoi(str));
// 	return (0);
// }

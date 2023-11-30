/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kboulkri <kboulkri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 16:48:25 by kboulkri          #+#    #+#             */
/*   Updated: 2023/05/21 19:10:56 by kboulkri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_len(int n)
{
	long int	nb;
	int			len;

	nb = (long int)n;
	len = 0;
	if (!nb)
		return (1);
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*conv;
	int			i;
	long int	nb;

	nb = (long int)n;
	i = ft_nb_len(n);
	conv = malloc(sizeof(char) * (i + 1));
	if (!conv)
		return (NULL);
	if (nb == 0)
		conv[0] = '0';
	if (nb < 0)
	{
		conv[0] = '-';
		nb = nb * -1;
	}
	conv[i] = '\0';
	while (nb > 0)
	{
		--i;
		conv[i] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (conv);
}

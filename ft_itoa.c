/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmallia <qmallia@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 20:15:29 by qmallia           #+#    #+#             */
/*   Updated: 2026/10/10 23:41:51 by qmallia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_size(long nbr, int *sign)
{
	int	size;

	size = 1;
	*sign = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		*sign = -1;
		size++;
	}
	while (nbr >= 10)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		size;
	int		sign;
	int		i;

	nbr = n;
	size = nbr_size(nbr, &sign);
	nbr *= sign;
	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	i = size - 1;
	while (i >= 0)
	{
		str[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	if (sign == -1)
		str[0] = '-';
	str[size] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmallia <qmallia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/13 01:14:24 by qmallia           #+#    #+#             */
/*   Updated: 2026/10/20 04:45:41 by qmallia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[0])
		return ((char *) big);
	while (big[i] && i < len)
	{
		while ((big[i + j] == little[j]) && big[i + j] && i + j < len)
		{
			j++;
			if (!(little[j]))
				return ((char *) big + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}

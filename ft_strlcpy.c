/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmallia <qmallia@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 23:55:41 by qmallia           #+#    #+#             */
/*   Updated: 2026/10/15 18:16:47 by qmallia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[i] && size > 0)
	{
		if (i < size - 1)
		{
			dst[i] = src[i];
			j++;
		}
		i++;
	}
	if (size > 0)
		dst[j] = '\0';
	return (ft_strlen(src));
}

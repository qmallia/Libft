/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmallia <qmallia@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 22:16:52 by qmallia           #+#    #+#             */
/*   Updated: 2026/10/15 17:38:20 by qmallia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s2;

	s2 = (char *)s;
	while (*s2 && *s2 != (unsigned char) c)
		s2++;
	if (!*s2 && c)
		return (NULL);
	return (s2);
}

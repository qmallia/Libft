/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmallia <qmallia@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:17:41 by qmallia           #+#    #+#             */
/*   Updated: 2026/10/15 18:13:59 by qmallia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	size_t	total;
	char	*join;

	i = 0;
	j = 0;
	total = ft_strlen(s1) + ft_strlen(s2);
	join = malloc(sizeof(char) * total + 1);
	if (!join)
		return (NULL);
	while (s1 && s1[i])
		join[i++] = s1[j++];
	j = 0;
	while (s2 && s2[j])
		join[i++] = s2[j++];
	join[i] = 0;
	return (join);
}

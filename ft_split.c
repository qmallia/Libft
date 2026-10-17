/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmallia <qmallia@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 22:31:25 by qmallia           #+#    #+#             */
/*   Updated: 2026/10/17 20:47:35 by qmallia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	free_words(char ***res, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(*res[i]);
		i++;
	}
	return (0);
}

static int	ft_count_words(char const *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i + 1] == sep || !str[i + 1]) && str[i] != sep)
			count++;
		i++;
	}
	return (count);
}

static void	assign_letters(char const *str, char sep, char *word)
{
	int	i;

	i = 0;
	while (str[i] != sep && str[i])
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
}

static int	assign_words(char const *str, char sep, char **res)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = 0;
	while (str[i])
	{
		if (str[i] == sep)
			i++;
		else
		{
			j = 0;
			while (str[i + j] != sep && str[i + j])
				j++;
			res[index] = malloc(sizeof(char) * (j + 1));
			if (!res[index])
				return (free_words(&res, index));
			assign_letters(&str[i], sep, res[index]);
			i += j;
			index++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words_count;

	if (!s)
		return (NULL);
	words_count = ft_count_words(s, c);
	res = (char **) malloc(sizeof(char *) * (words_count + 1));
	if (!res)
		return (NULL);
	if (!assign_words(s, c, res))
	{
		free(res);
		return (NULL);
	}
	res[words_count] = NULL;
	return (res);
}

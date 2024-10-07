/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echernys <echernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:37:18 by echernys          #+#    #+#             */
/*   Updated: 2024/10/07 12:37:19 by echernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	guard_i;
	int	s_len;
	int	*wordscount;
	char	buffer[10000];
	char	**tab;

	i = 0;
	j = 0;
	guard_i = 0;

	*wordscount = 0;
	while (i < ft_strlen(s))
	{
		while (i < ft_strlen(s))
		{
			if (s[i] != c)
				break;
			i++;
		}
		guard_i = i;
		while (i < ft_strlen(s))
		{
			if (s[i] == c)
				break;
			i++;
		}
		if (i > guard_i)
			*wordscount = *wordscount + 1;
	}
	tab = malloc(sizeof(char*) * *wordscount + 1);
	i = 0;
	wordscount = 0;
	while (i < ft_strlen(s))
	{
		while (i < s_len)
		{
			if (s[i] != c)
				break;
			i++;
		}
		*wordscount = *wordscount + 1;
		j = 0;
		while (i < ft_strlen(s))
		{
			if (s[i] == c)
				break;
			buffer[j] = s[i];
			j++;
			i++;
		}
		if (j > 0)
		{
			buffer[j] = '\0';
			tab[wordscount] = malloc(sizeof(char) * (ft_strlen(buffer) + 1));
			ft_strlcpy(tab[wordscount], buffer, ft_strlen(buffer));
		}
		return (tab);
	}
}
	// s1 = malloc(sizeof(char) * splt + 1);
	// if (!(s1))
	// 	return (NULL);
	// s2 = malloc(sizeof(char) * (s_len - splt + 1));
	// if (!(s2))
	// 	return (NULL);
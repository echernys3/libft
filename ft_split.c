/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echernys <echernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:37:18 by echernys          #+#    #+#             */
/*   Updated: 2024/10/07 15:47:27 by echernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **spcalloc(const char *s, char c, char **tab)
{
	int	i;
	int	guard_i;
	int	wordscount;
	
	i = 0;
	guard_i = 0;
	wordscount = 0;
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
			wordscount++;
	}
	tab = malloc(sizeof(char*) * (wordscount + 1));
	if (!tab)
		return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int wordscount;
	char	buffer[10000];
	char	**tab;

	tab = NULL;
	tab = spcalloc(s, c, tab);
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	wordscount = 0;
	while (i < ft_strlen(s))
	{
		while (i < ft_strlen(s))
		{
			if (s[i] != c)
				break;
			i++;
		}
		wordscount++;
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
			if (tab[wordscount])
				free(tab);
				return (NULL);
			ft_strlcpy(tab[wordscount], buffer, ft_strlen(buffer));
		}
		tab[wordscount + 1] = NULL;
		return (tab);
	}
}

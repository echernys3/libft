/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echernys <echernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:37:18 by echernys          #+#    #+#             */
/*   Updated: 2024/10/08 11:53:12 by echernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	freer(char **tab, int wordscount)
{
	int	k;

	k = 0;
	while (k < wordscount)
	{
		free(tab[k]);
		k++;
	}
	free(tab);
}

char	**spcalloc(const char *s, char c)
{
	int		i;
	int		wordscount;
	char	**tab;

	i = 0;
	wordscount = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		if (s[i] && s[i] == c)
		{
			wordscount++;
			while (s[i] && s[i] == c)
				i++;
		}
	}
	tab = malloc(sizeof(char *) * (wordscount + 1));
	if (!tab)
		return (NULL);
	tab[wordscount] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		wordscount;
	char	**tab;

	i = 0;
	j = 0;
	wordscount = 0;
	tab = spcalloc(s, c);
	if (!s || !tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			j = 0;
			while (s[i + j] && s[i + j] != c)
				j++;
			tab[wordscount] = malloc(sizeof(char) * (j + 1));
			if (!(tab[wordscount]))
			{
				freer(tab, wordscount);
				return (NULL);
			}
			ft_strlcpy(tab[wordscount], &s[i], j + 1);
			wordscount++;
			i += j;
		}
	}
	return (tab);
}

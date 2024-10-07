/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echernys <echernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:37:54 by echernys          #+#    #+#             */
/*   Updated: 2024/10/07 17:28:17 by echernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	endcheck(char const *s1, char const *set, int s1_len, int set_len)
{
	while (s1[s1_len] == set[set_len] && set_len >= 0)
	{
		set_len--;
		s1_len--;
	}
	if (set_len < 0)
		return (1);
	return (0);
}

static int	startcheck(char const *s1, char const *set, int pos, int set_len)
{
	while (s1[pos] == set[pos] && pos < set_len)
		pos++;
	if (pos == set_len)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	set_len;
	size_t	s1_len;

	set_len = ft_strlen(set);
	s1_len = ft_strlen(s1);
	if (endcheck(s1, set, ft_strlen(s1), set_len))
		end = s1_len - set_len;
	else
		end = s1_len;
	if (startcheck(s1, set, 0, set_len))
		start = set_len;
	else
		start = 0;
	return (ft_substr(s1, start, end - start));
}

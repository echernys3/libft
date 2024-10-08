/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echernys <echernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:37:20 by echernys          #+#    #+#             */
/*   Updated: 2024/10/08 11:52:42 by echernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*ptr;
	unsigned int	i;

	ptr = (char *)s;
	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (!(s[i]))
		return (NULL);
	return (ptr + i);
}

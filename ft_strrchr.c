/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echernys <echernys@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:37:52 by echernys          #+#    #+#             */
/*   Updated: 2024/10/07 17:26:27 by echernys         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	ptr = (char *)s;
	i = ft_strlen(ptr);
	if (c == '\0')
		return (&ptr[i]);
	while (i > 0)
	{
		if (s[i - 1] == c)
			return (&ptr[i - 1]);
		i--;
	}
	return (NULL);
}

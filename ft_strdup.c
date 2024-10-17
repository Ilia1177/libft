/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npolack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:01:55 by npolack           #+#    #+#             */
/*   Updated: 2024/10/15 22:13:55 by npolack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		s_len;
	int		i;

	s_len = 0;
	dest = 0;
	i = 0;
	while (s[i])
	{
		s_len++;
		i++;
	}
	dest = (char *)ft_calloc(s_len + 1, sizeof (char));
	if (!dest)
		return (0);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

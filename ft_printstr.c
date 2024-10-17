/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npolack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:33:22 by npolack           #+#    #+#             */
/*   Updated: 2024/10/16 19:39:26 by npolack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../include/ft_printf.h"

int	ft_printstr(char *s)
{
	size_t	len;

	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	return (len);
}

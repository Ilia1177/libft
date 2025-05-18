/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npolack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:03:32 by npolack           #+#    #+#             */
/*   Updated: 2025/04/14 16:24:55 by jhervoch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	ft_expf(float x)
{
	float	result;
	float	term;
	int		i;

	result = 1.0f;
	term = 1.0f;
	i = 1;
	while (i < 50)
	{
		term *= x / i;
		result += term;
		if (term < 1e-6f && term > -1e-6f)
			break ;
		i++;
	}
	return (result);
}

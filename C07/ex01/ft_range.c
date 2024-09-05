/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:48:49 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/29 12:56:55 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	size;
	int				*result;
	int				i;

	size = 0;
	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	result = malloc(4 * size);
	if (result == 0)
		return (0);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}

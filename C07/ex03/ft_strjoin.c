/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:47:48 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/29 15:34:21 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	total_size(char **strs, int sep_size, int count)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (i < count)
	{
		size += ft_len(strs[i]);
		i++;
	}
	return (size + (sep_size * (i - 1)));
}

char	*free_memory(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	*str = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*str;
	int		z;

	i = 0;
	if (size == 0)
		return (free_memory());
	str = malloc(total_size(strs, ft_len(sep), size) + 1);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			*str++ = strs[i][j++];
		z = 0;
		if (i < size -1)
		{
			while (sep[z])
				*str++ = sep[z++];
		}
		i++;
	}
	*str = '\0';
	return (str - total_size(strs, ft_len(sep), size));
}

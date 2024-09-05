/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 21:10:55 by raydogmu          #+#    #+#             */
/*   Updated: 2024/09/05 12:04:23 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	controller(char str1, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (str1 == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*adress(char *str, int k, int z)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)malloc(z - k + 1);
	if (result == NULL)
		return (NULL);
	while (k < z)
	{
		result[i] = str[k];
		i++;
		k++;
	}
	result[i] = '\0';
	return (result);
}

int	word_counter(char *str, char *charset)
{
	int	word_count;
	int	i;
	int	last_i;

	i = 0;
	last_i = 0;
	word_count = 0;
	while (str[i])
	{
		if (controller(str[i], charset))
		{
			if (last_i < i)
				word_count++;
			last_i = i + 1;
		}
		else if (str[i + 1] == '\0')
			word_count++;
		i++;
	}
	return (word_count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		last_i;
	char	**result;

	i = 0;
	last_i = 0;
	j = 0;
	result = (char **)malloc((word_counter(str, charset) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (str[i])
	{
		if (controller(str[i], charset))
		{
			if (last_i < i)
				result[j++] = adress(str, last_i, i);
			last_i = i + 1;
		}
		else if (str[i + 1] == '\0')
			result[j++] = adress(str, last_i, i + 1);
		i++;
	}
	result[j] = NULL;
	return (result);
}

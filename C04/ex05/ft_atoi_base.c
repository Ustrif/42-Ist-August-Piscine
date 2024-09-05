/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:38:21 by raydogmu          #+#    #+#             */
/*   Updated: 2024/09/04 20:26:36 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	say;

	say = 0;
	while (str[say] != '\0')
	{
		say++;
	}
	return (say);
}

int	base_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 33 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	long	say;
	int		l;

	say = 0;
	l = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			l = l * -1;
		str++;
	}
	if (!base_valid(base))
		return (l * say);
	while (get_value(*str, base) != -1)
	{
		if (!((say * ft_strlen(base)) + get_value(*str, base) > 2147483648))
			say = (say * ft_strlen(base)) + get_value(*str, base);
		str++;
	}
	return (l * say);
}

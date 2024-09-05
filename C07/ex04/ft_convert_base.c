/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:28:33 by raydogmu          #+#    #+#             */
/*   Updated: 2024/09/05 15:23:10 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_convert_base2.c"
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

int	is_differ(char *base, char *base2)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (base[i] || base2[i])
	{
		if (base[i] != base2[i])
			result = 1;
		i++;
	}
	return (result);
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	result;

	result = 0;
	if (!base_valid(base_from) || !base_valid(base_to))
		return (NULL);
	if (!is_differ(base_from, base_to))
		return (nbr);
	result = ft_atoi_base(nbr, base_from);
	ft_putnbr_base(result, base_to);
	return ("br");
}

int main()
{
	ft_convert_base("   --++-45693", "0123456789", "0123456789x");
}

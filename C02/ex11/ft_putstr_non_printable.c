/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:37:51 by raydogmu          #+#    #+#             */
/*   Updated: 2024/09/04 11:39:58 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_write(int n)
{
	char	*liste;

	liste = "0123456789abcdef";
	if (n >= 16)
		ft_write(n / 16);
	ft_putchar(liste[n % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_str_is_printable(str[i]))
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_write(str[i]);
		}
		i++;
	}
}

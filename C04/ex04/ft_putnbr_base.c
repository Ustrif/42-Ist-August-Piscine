/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:28:43 by raydogmu          #+#    #+#             */
/*   Updated: 2024/09/04 17:55:02 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

void	putnbr_recursive(unsigned int nb, char *base, int base_len)
{
	if (nb >= (unsigned int)base_len)
		putnbr_recursive(nb / base_len, base, base_len);
	ft_putchar(base[nb % base_len]);
}

void	ft_putnbr(int nbr, char *base, int base_len)
{
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		putnbr_recursive(nbr, base, base_len);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > base_len -1)
	{
		ft_putnbr(nbr / base_len, base, base_len);
	}
	ft_putchar(base[nbr % base_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_valid(base))
	{
		ft_putnbr(nbr, base, base_len);
	}
}

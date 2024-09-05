/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:17:56 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/28 18:20:54 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	r;

	r = 2;
	if (nb == 1 || nb == 0)
		return (0);
	else if (nb < 0)
		return (0);
	else
	{
		while (r < nb)
		{
			if (nb % r == 0)
				return (0);
			r++;
		}
	}
	return (1);
}

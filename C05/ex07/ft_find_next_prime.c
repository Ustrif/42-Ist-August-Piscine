/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:21:49 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/28 18:24:06 by raydogmu         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	r;

	r = nb;
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(r))
		r++;
	return (r);
}

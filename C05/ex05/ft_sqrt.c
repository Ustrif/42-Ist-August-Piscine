/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:10:20 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/28 18:16:32 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	r;

	r = 0;
	if (nb == 0)
		return (0);
	while (r <= nb)
	{
		if (nb == r * r)
			return (r);
		else
			r++;
	}
	return (0);
}
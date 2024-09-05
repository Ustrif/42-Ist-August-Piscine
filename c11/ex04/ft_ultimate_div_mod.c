/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:45:42 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/21 11:45:43 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	if (b != 0)
	{
		tempa = *a;
		tempb = *b;
		*a = tempa / tempb;
		*b = tempa % tempb;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:52:03 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/28 15:06:25 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb >= 0 && nb < 2)
		return (1);
	if (nb != 1)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}

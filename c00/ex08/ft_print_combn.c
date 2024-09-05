/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 21:29:08 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/28 21:34:03 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else if (power < 0)
		return (0);
	else
	{
		while (power != 1)
		{
			result = result * nb;
			power--;
		}
	}
	return (result);
}


void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	printf("%d",ft_iterative_power(10, n));
	while (i < ft_iterative_power(10, n))
	{
		//write(1, &i, 1);
		i++;
	}
}
int main()
{
	ft_print_combn(20);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:50:24 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/21 12:29:04 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	end;

	i = 0;
	end = size - 1;
	while (i < end)
	{
		temp = tab[i];
		tab[i] = tab[end];
		tab[end] = temp;
		i++;
		end--;
	}
}

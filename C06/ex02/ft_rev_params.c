/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:51:00 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/28 19:54:15 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	c;

	while (*str != '\0')
	{
		c = *str;
		write(1, &c, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int		i;

	i = argc - 1;
	while (1 <= i)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}

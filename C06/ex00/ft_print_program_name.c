/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:31:51 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/28 19:08:40 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*name;
	int		a;

	name = argv[0];
	a = argc;
	while (*name)
	{
		write(1, name, 1);
		name++;
	}
	write(1, "\n", 1);
	return (0);
}

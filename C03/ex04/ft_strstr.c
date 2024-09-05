/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:13:56 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/28 12:10:00 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		y = 0;
		while (to_find[y] != '\0' && (str[i + y] == to_find[y]))
		{
			y++;
		}
		if (to_find[y] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

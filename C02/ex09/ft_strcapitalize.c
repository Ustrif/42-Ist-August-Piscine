/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 13:48:34 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/25 13:41:30 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char	*str)
{
	char	*ilk;
	int		flag;

	ilk = str;
	flag = 1;
	while (*str)
	{
		if (flag && *str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
			flag = 0;
		}
		else if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')
				|| (*str >= '0' && *str <= '9')))
			flag = 1;
		else if (!flag && (*str >= 'A' && *str <= 'Z'))
			*str = *str + 32;
		else
			flag = 0;
		str++;
	}
	return (ilk);
}

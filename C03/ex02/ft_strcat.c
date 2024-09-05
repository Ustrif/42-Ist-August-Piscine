/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:58:11 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/25 15:06:23 by raydogmu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*ilk;
	int		dest_l;

	ilk = dest;
	dest_l = ft_len(dest);
	while (*src)
	{
		dest[dest_l] = *src;
		dest_l++;
		src++;
	}
	dest[dest_l] = '\0';
	return (ilk);
}

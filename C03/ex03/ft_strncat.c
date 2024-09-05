/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raydogmu <raydogmu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:52:47 by raydogmu          #+#    #+#             */
/*   Updated: 2024/08/25 18:13:05 by raydogmu         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char				*ilk;
	int					dest_l;
	unsigned int		l;

	ilk = dest;
	l = 0;
	dest_l = ft_len(dest);
	while (*src && l < nb)
	{
		dest[dest_l] = *src;
		dest_l++;
		l++;
		src++;
	}
	dest[dest_l] = '\0';
	return (ilk);
}

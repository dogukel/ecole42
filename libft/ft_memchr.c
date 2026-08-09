/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkel <dkel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:10:12 by dkel              #+#    #+#             */
/*   Updated: 2022/10/27 20:14:44 by dkel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	size_t			i;
	int				k;
	unsigned char	*str;

	i = 0;
	k = 0;
	if (len == 0)
		return (0);
	str = (unsigned char *)b;
	while (i < len)
	{
		if (str[i] == (unsigned char)c)
			return (&str[i]);
		else
			k = 1;
		i++;
	}
	if (k == 1)
		return (0);
	else
		return (&str[i]);
}

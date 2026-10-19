/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dogucankel <dogucankel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:19:38 by dkel              #+#    #+#             */
/*   Updated: 2026/10/19 17:12:44 by dogucankel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t  j;

	i = 0;
	j = 0;
	if (len > 0)
	{
		while (src[i] && i < len - 1)
		{
			dest[i] = src[i];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	while (src[j])
		j++;
	return (j);
}

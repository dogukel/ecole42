/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkel <dkel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:51:55 by dkel              #+#    #+#             */
/*   Updated: 2022/10/27 19:52:42 by dkel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)malloc(count * size);
	if (p == NULL)
		return (NULL);
	while (i < (count * size))
	{
		p[i] = '\0';
		i++;
	}
	return (p);
}

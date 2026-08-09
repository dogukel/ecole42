/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkel <dkel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:13:22 by dkel              #+#    #+#             */
/*   Updated: 2022/10/27 20:13:34 by dkel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)src;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (src);
}

/*#include <string.h>
#include <stdio.h>
int    main()
{
    char dizi[30] = "dogutemp";
    ft_putstr(ft_memset(dizi,'x',4));
}*/

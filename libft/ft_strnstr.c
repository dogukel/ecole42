/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkel <dkel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:20:22 by dkel              #+#    #+#             */
/*   Updated: 2022/10/27 20:42:33 by dkel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *dst, const char *src, size_t len)
{
    size_t    h;
    size_t    n;

    h = 0;
    if (src[0] == '\0')
        return ((char *)dst);
    while (dst[h] != '\0')
    {
        n = 0;
        while (dst[h + n] == src[n] && (h + n) < len)
        {
            if (dst[h + n] == '\0' && src[n] == '\0')
                return ((char *)&dst[h]);
            n++;
        }
        if (src[n] == '\0')
            return ((char *)dst + h);
        h++;
    }
    return (0);
}

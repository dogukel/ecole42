/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkel <dkel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:18:17 by dkel              #+#    #+#             */
/*   Updated: 2022/10/27 20:19:33 by dkel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcat(char   *dst, const char *src, size_t dstsize)
{
    size_t    a;
    size_t    b;
    size_t    dstlen;
    size_t    srclen;

    dstlen = ft_strlen(dst);
    srclen = ft_strlen((char *)src);
    a = ft_strlen(dst);
    if (dstsize <= dstlen)
        return (dstsize + srclen);
    b = 0;
    while (src[b] != '\0' && a < dstsize - 1)
    {
        dst[a] = src[b];
        a++;
        b++;
    }
    dst[a] = '\0';
    return (dstlen + srclen);
}

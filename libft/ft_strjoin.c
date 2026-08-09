/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkel <dkel@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:17:29 by dkel              #+#    #+#             */
/*   Updated: 2022/10/27 20:18:11 by dkel             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    int        a;
    char    *str;
    int        b;

    if (!s1 || !s2)
        return (0);
    str = malloc(sizeof(char) * (ft_strlen((char *)s1) + ft_strlen((char *)s2)) + 1);
    if (!str)
        return (NULL);
    a = 0;
    while (s1[a] != '\0')
    {
        str[a] = s1[a];
        a++;
    }
    b = 0;
    while (s2[b] != '\0')
    {
        str[a + b] = s2[b];
        b++;
    }
    str[a + b] = '\0';
    return (str);
}

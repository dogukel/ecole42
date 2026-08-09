/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dogucankel <dogucankel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:43:27 by dogucankel        #+#    #+#             */
/*   Updated: 2022/11/29 23:20:29 by dogucankel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_char(char c)
{
	int	i;

	i = 0;
	i = write(1, &c, 1);
	
	return (i);
}

int	ft_print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i += write(1, &str[i], 1);
	}
	return (i);
	
}

int	ft_print_hex_str(void *str)
{
	
}
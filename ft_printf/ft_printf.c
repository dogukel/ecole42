/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dogucankel <dogucankel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:13:22 by dkel              #+#    #+#             */
/*   Updated: 2022/11/30 00:04:38 by dogucankel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
/* int	ft_control(va_list args, char format)
{
	if(format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (format == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (format == 'p')
	{
		write(1, "0x", 2);
		return (ft_print_hex_str(va_arg(args, void *)));
	}
	else if (format == 'd' || format == 'X')
		return (ft_print_nbr(va_arg(args, int)));
	else if (format == 'u')
		return (ft_print_unbr(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (ft_print_hexnum(va_arg(args, unsigned int)));
	else if (format == '%')
		return (write(1, '%', 1));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	va_start(args, str);
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_control(args, str[i]);
			i++;
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (len);
} */

int	main(void)
{
	void	*str = "";
	char	*str1 = "";

	
	int a = 0;
	int b = 0;

	
	printf("%p ", str);
	/* printf("%c ", 'c');
	printf("%i ", 5);
	printf("%u ", -5);
	printf("%x ", 11);
	printf("%X ", 11);
	printf("%% ");
	printf("%s", str1); */
}
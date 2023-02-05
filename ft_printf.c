/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalem <fsalem@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:33:00 by fsalem            #+#    #+#             */
/*   Updated: 2023/02/05 14:30:56 by fsalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_spot(va_list arg, char f)
{
	int	len;

	len = 0;
	if (f == 'c')
		len += ft_character(va_arg(arg, int));
	if (f == '%')
		len += ft_character('%');
	else if (f == 's')
		len += ft_string(va_arg(arg, char *));
	else if (f == 'x' || f == 'X')
		len += ft_hexa(va_arg(arg, unsigned int), f);
	else if (f == 'i' || f == 'd')
		len += ft_putnbr(va_arg(arg, int));
	else if (f == 'p')
		len += ft_pointer(va_arg(arg, unsigned long));
	else if (f == 'u')
		len += ft_unsigned(va_arg(arg, int));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		i;
	va_list	arg;

	len = 0;
	i = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len += ft_spot(arg, format[i + 1]);
			i++;
		}
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(arg);
	return (len);
}

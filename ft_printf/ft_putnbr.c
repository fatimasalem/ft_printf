/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalem <fsalem@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:13:44 by fsalem            #+#    #+#             */
/*   Updated: 2022/03/23 13:40:59 by fsalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	int	len;

	len = 0;
	if (num == -2147483648)
	{
		len += write(1, "-2147483648", 11);
		return (len);
	}
	if (num < 0)
	{
		len += ft_character('-');
		num = num * -1;
	}
	if (num >= 10)
	{
		len += ft_putnbr(num / 10);
		len += ft_putnbr(num % 10);
	}
	else
		len += ft_character(num + '0');
	return (len);
}

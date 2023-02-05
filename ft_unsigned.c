/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalem <fsalem@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:31:43 by fsalem            #+#    #+#             */
/*   Updated: 2023/02/05 14:30:41 by fsalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int num)
{
	unsigned int	len;

	len = 0;
	if (num >= 10)
	{
		len += ft_putnbr(num / 10);
		len += ft_putnbr(num % 10);
	}
	else
		len += ft_character(num + '0');
	return (len);
}

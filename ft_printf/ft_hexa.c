/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalem <fsalem@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:06:23 by fsalem            #+#    #+#             */
/*   Updated: 2022/03/23 13:45:58 by fsalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

int	ft_hexa(unsigned int n, char spot)
{
	int	hexa_len;

	hexa_len = hex_len(n);
	if (n >= 16)
	{
		ft_hexa(n / 16, spot);
		ft_hexa(n % 16, spot);
	}
	else if (n <= 9)
		ft_character(n + '0');
	else if (n > 9 && n < 16)
	{
		if (spot == 'x')
			ft_character(n - 10 + 'a');
		if (spot == 'X')
			ft_character(n - 10 + 'A');
	}
	return (hexa_len);
}

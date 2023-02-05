/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalem <fsalem@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:18:40 by fsalem            #+#    #+#             */
/*   Updated: 2023/02/05 14:30:59 by fsalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	long_hex_len(unsigned long n)
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

int	ft_ptr_range(unsigned long n)
{
	int	ptr_len;

	ptr_len = long_hex_len(n);
	if (n >= 16)
	{
		ft_ptr_range(n / 16);
		ft_ptr_range(n % 16);
	}
	else if (n <= 9)
		ft_character(n + '0');
	else if (n > 9 && n < 16)
	{
		ft_character(n - 10 + 'a');
	}
	return (ptr_len);
}

int	ft_pointer(unsigned long n)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	len += ft_ptr_range(n);
	return (len);
}

// int main(void)
// {
// 	int a;

// 	printf("This is printf %p\n", &a);
// 	printf("This is ft_printf %p\n", &a);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalem <fsalem@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:58:12 by fsalem            #+#    #+#             */
/*   Updated: 2023/02/05 14:30:47 by fsalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(char *s)
{
	int	len;
	int	f;

	len = 0;
	f = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[f] != '\0')
	{
		len += ft_character(s[f]);
		f++;
	}
	return (len);
}

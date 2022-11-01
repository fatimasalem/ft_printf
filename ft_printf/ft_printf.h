/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalem <fsalem@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 13:55:01 by fsalem            #+#    #+#             */
/*   Updated: 2022/03/23 12:34:50 by fsalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_character(char f);
int	ft_string(char *s);
int	ft_hexa(unsigned int n, char spot);
int	ft_putnbr(int num);
int	ft_pointer(unsigned long n);
int	ft_unsigned(unsigned int num);
int	ft_printf(const char *format, ...);

#endif

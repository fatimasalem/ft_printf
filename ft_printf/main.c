/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsalem <fsalem@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:11:53 by fsalem            #+#    #+#             */
/*   Updated: 2022/10/26 15:21:00 by fsalem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*p;
	int	f = 45;
	/*------------This is the built int printf------------*/
	printf("\n\033[0;36m------------Built in printf------------\033[0m\n\n");
	printf("This is the string output: %s\n", "Hello my name is Fatima Salem");
	printf("This is the decimal output: %d\n", '2');
	printf("This is the integer output: %i\n", '2');
	printf("This is the unsigned decimal output: %u\n", '2');
	printf("This is the lower case hexa output: %x\n", f);
	printf("This is the upper case hexa output: %X\n", f);
	printf("This is the pointer output: %p\n", p);
	printf("This is the character output: %c\n", 'f');
	printf("This is the percentage output: %%\n");
	printf("\033[0;31mDon't hesitate to contact me for any software information\033[0m\n\n");
	
	/*------------This is my ft_printf------------*/
	ft_printf("\n\033[0;33m------------My ft_printf------------\033[0m\n\n");
	ft_printf("This is the string output: %s\n", "Hello my name is Fatima Salem");
	ft_printf("This is the decimal output: %d\n", '2');
	ft_printf("This is the integer output: %i\n", '2');
	ft_printf("This is the unsigned decimal output: %u\n", '2');
	ft_printf("This is the lower case hexa output: %x\n", f);
	ft_printf("This is the upper case hexa output: %X\n", f);
	ft_printf("This is the pointer output: %p\n", p);
	ft_printf("This is the character output: %c\n", 'f');
	ft_printf("This is the percentage output: %%\n");
	ft_printf("\033[0;31mDon't hesitate to contact me for any software information\033[0m\n\n");

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keshav <keshav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:06:26 by keshav            #+#    #+#             */
/*   Updated: 2021/11/30 14:36:05 by keshav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printc(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_format(va_list args, const char format)
{
	int	print_lgth;

	print_lgth = 0;
	if (format == 'c')
		print_lgth += ft_printc(va_arg(args, int));
	else if (format == 's')
		print_lgth += ft_printst(va_arg(args, char *));
	else if (format == 'p')
		print_lgth += ft_printptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_lgth += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_lgth += ft_printunsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_lgth += ft_printhex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_lgth += ft_printpercent();
	return (print_lgth);
}

int	ft_printf(const char *st, ...)
{
	int		i;
	int		print_lgth;
	va_list	args;

	i = 0;
	print_lgth = 0;
	va_start(args, st);
	while (st[i])
	{
		if (st[i] == '%')
		{
			print_lgth += ft_format(args, st[i + 1]);
			i++;
		}
		else
			print_lgth += ft_printc(st[i]);
		i++;
	}
	va_end(args);
	return (print_lgth);
}

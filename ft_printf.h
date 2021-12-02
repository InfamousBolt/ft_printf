/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keshav <keshav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:06:49 by keshav            #+#    #+#             */
/*   Updated: 2021/12/01 12:40:30 by keshav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int			ft_printf(const char *st, ...);
int			ft_format(va_list args, const char format);
int			ft_printc(int c);
int			ft_printnbr(int n);
int			ft_printst(char *st);
int			ft_printptr(unsigned long long ptr);
int			ft_printunsigned(unsigned int n);
int			ft_printhex(unsigned int nbr, const char format);
int			ft_printpercent(void);
void		ft_putptr(uintptr_t nbr);
void		ft_putchar_fd(char c, int fd);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keshav <keshav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:06:45 by keshav            #+#    #+#             */
/*   Updated: 2021/11/29 19:06:48 by keshav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putst(char *st)
{
	int	i;

	i = 0;
	while (st[i])
	{
		write(1, &st[i], 1);
		i++;
	}
}

int	ft_printst(char *st)
{
	int	i;

	i = 0;
	if (st == NULL)
	{
		ft_putst("(null)");
		return (6);
	}
	while (st[i])
	{
		write(1, &st[i], 1);
		i++;
	}
	return (i);
}

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}

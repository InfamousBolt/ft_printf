/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keshav <keshav@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:07:24 by keshav            #+#    #+#             */
/*   Updated: 2021/11/30 20:11:57 by keshav           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size(int n)
{
	int	result;

	if (n <= 0)
		result = 1;
	else
		result = 0;
	while (n != 0)
	{
		n = n / 10;
		result++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char			*result;
	unsigned int	number;
	int				size;

	if (n < 0)
		number = -n;
	else
		number = n;
	size = ft_size(n);
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	result[size--] = '\0';
	while (size >= 0)
	{
		result[size] = number % 10 + 48;
		number = number / 10;
		size--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

int	ft_printnbr(int n)
{
	int		len;
	char	*nbr;

	len = 0;
	nbr = ft_itoa(n);
	len = ft_printst(nbr);
	free(nbr);
	return (len);
}

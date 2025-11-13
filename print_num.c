/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:49:06 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/13 15:27:43 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_int(void *i)
{
	long	num;
	char	c;

	num = (long)(*((int*)i));
	if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
	}
	while (num > 9)
	{
		c = num % 10 + '0';
		write(1, &c, 1);
		num = num / 10;
	}
	c = num + '0';
	write(1, &c, 1);
}

void	print_uint(void *u)
{
	unsigned int	num;
	char			c;

	num = *(unsigned int*)u;
	while (num > 9)
	{
		c = num % 10 + '0';
		write(1, &c, 1);
		num = num / 10;
	}
	c = num + '0';
	write(1, &c, 1);
}

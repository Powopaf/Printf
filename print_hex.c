/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:28:09 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/13 17:29:43 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_lhex(void *l)
{
	const char		*base;
	unsigned int	num;
	char			hex[8];
	size_t			i;

	base = "0123456789abcdef";
	num = *(unsigned int*)l;
	write(1, "0x", 2);
	if (num == 0)
	{
		write(1, "0", 1);
		return ;
	}
	i = 7;
	while (num > 0)
	{
		hex[i--] = base[num % 16];
		num = num / 16;
	}
	while (i++ < 8)
	{
		if (hex[i] == '0')
			continue ;
		write(1, hex + i, 1);
	}
}

void	print_uhex(void *u)
{
	const char		*base;
	unsigned int	num;
	char			hex[8];
	size_t			i;

	base = "0123456789ABCDEF";
	num = *(unsigned int*)u;
	write(1, "0X", 2);
	if (num == 0)
	{
		write(1, "0", 1);
		return ;
	}
	i = 7;
	while (num > 0)
	{
		hex[i--] = base[num & 0xf];
		num = num >> 4;
	}
	while (i++ < 8)
	{
		if (hex[i] == '0')
			continue ;
		write(1, hex + i, 1);
	}
}

void print_p(void *p)
{
	uintptr_t	val;
	const char	*base;
	char		hex[16];
	size_t		i;

	base = "0123456789abcdef";
	val = (uintptr_t)p;
	write(1, "0x", 2);
	if (val == 0)
	{
		write(1, "0", 1);
		return ;
	}
	i = 15;
	while (val > 0)
	{
		hex[i--] = base[val & 0xf];
		val = val >> 4;
	}
	while (i++ < 16)
		write(1, hex + i, 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:49:05 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/15 01:36:21 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_p(uintptr_t p)
{
	int		len;
	char	*base;
	char	hex[16];
	int		count;

	if (p == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	len = 15;
	count = write(1, "0x", 2);
	base = "0123456789abcdef";
	while (p > 0)
	{
		hex[len] = base[p & 0xf];
		p = p >> 4;
		len--;
	}
	while (++len < 16)
		count = count + write(1, hex + len, 1);
	return (count);
}

static int	print_hex(unsigned int i, char *base)
{
	int		j;
	char	hex[10];
	int		len;

	if (i == 0)
		return (write(1, "0", 1));
	j = 9;
	while (i > 0)
	{
		hex[j] = base[i & 0xf];
		i = i >> 4;
		j--;
	}
	len = 0;
	while (++j < 10)
		len = len + write(1, hex + j, 1);
	return (len);
}

int	print_lhex(unsigned int l)
{
	return (print_hex(l, "0123456789abcdef"));
}

int	print_uhex(unsigned int u)
{
	return (print_hex(u, "0123456789ABCDEF"));
}

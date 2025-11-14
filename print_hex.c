/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:49:05 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/14 18:14:56 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
	while(++len < 16)
		count = count + write(1, hex + len , 1);
	return (count);
}

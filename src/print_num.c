/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:07:34 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/15 01:35:43 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_int(int i)
{
	int	len;

	ft_putnbr_fd(i, 1);
	if (i == 0)
		return (1);
	len = 0;
	if (i < 0)
		len++;
	while (i != 0)
	{
		len++;
		i = i / 10;
	}
	return (len);
}

int	print_uint(unsigned int u)
{
	char	buf[10];
	int		i;
	int		len;

	if (u == 0)
		return (write(1, "0", 1));
	i = 0;
	while (u > 0)
	{
		buf[i++] = '0' + (u % 10);
		u = u / 10;
	}
	len = i;
	while (i-- > 0)
		write(1, &buf[i], 1);
	return (len);
}

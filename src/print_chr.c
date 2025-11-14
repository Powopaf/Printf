/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_chr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:17:00 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/14 11:16:50 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_str(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, s + i, 1);
		i++;
	}
	return (i);
}

int print_percent()
{
	return (print_char('%'));
}

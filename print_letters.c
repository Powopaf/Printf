/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_letters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:24:32 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/13 13:51:12 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(void *c)
{
	write(1, (char *)c, 1);
}

void	print_string(void *s)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char*)s;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
	}
}

void	print_percent(void *p)
{
	write(1, "%", 1);
}

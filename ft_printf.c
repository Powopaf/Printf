/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:02:26 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/13 13:14:47 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * TODO: write until end of string OR when we find a %
 * when % is find  -> check next char end see if it's in the following list
 * cspdiuxX%
 * utiliser va_* pour lire les ...
 */

#include <stdarg.h>
#include <stddef.h>
#include "ft_printf.h"
#include <unistd.h>

void	print_char(void *c)
{
	write(1, (char*)c, 1);
}

void	print_string(void *s)
{
	write(1, (char*)s, 1);
}

void	init_print(void (*f[])(void*))
{
	f[0] = print_char;
	f[1] = print_string;
}

int	ft_printf(const char *s, ...)
{
	const char	*str;
	va_list		param;
	void		*curr;
	size_t		i;
	void (*print[2])();


	init_print(print);
	str = s;
	va_start(param, s);
	i = 0;
	while (1)
	{
		while (str[i] != '\0' && str[i] != '%')
		{
			write(1, s + i, 1);
			i++;
		}
		if (str[i] == '\0')
			break;
		curr = va_arg(param, void*);
		i++;

	}
	return (0);
}

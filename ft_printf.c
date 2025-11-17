/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:02:26 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/17 11:32:18 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	what_func(char c, va_list to_print)
{
	if (c == 'c')
		return (print_char((char)(va_arg(to_print, int))));
	if (c == 's')
		return (print_str((char *)(va_arg(to_print, char *))));
	if (c == '%')
		return (print_percent());
	if (c == 'p')
		return (print_p((uintptr_t)(va_arg(to_print, void *))));
	if (c == 'd' || c == 'i')
		return (print_int((int)(va_arg(to_print, int))));
	if (c == 'u')
		return (print_uint((unsigned int)(va_arg(to_print, unsigned int))));
	if (c == 'x')
		return (print_lhex((unsigned int)(va_arg(to_print, unsigned int))));
	if (c == 'X')
		return (print_uhex((unsigned int)(va_arg(to_print, unsigned int))));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	const char	*str;
	va_list		param;
	size_t		len;
	size_t		i;

	if (s == NULL)
		return (-1);
	str = s;
	va_start(param, s);
	i = 0;
	len = 0;
	while (1)
	{
		while (str[i] != '\0' && str[i] != '%')
		{
			write(1, &s[i++], 1);
			len++;
		}
		if (str[i] == '\0')
			break ;
		i++;
		len = len + what_func(str[i++], param);
	}
	va_end(param);
	return (len);
}

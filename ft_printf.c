/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:02:26 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/13 15:53:33 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_print(void (*f[])(void*))
{
	f[0] = print_char;
	f[1] = print_string;
	f[2] = print_p;
	f[3] = print_int;
	f[4] = print_int;
	f[5] = print_uint;
	f[6] = print_lhex;
	f[7] = print_uhex;
	f[8] = print_percent;
}	

void	what_func(char c, void *to_print, void (*f[])(void*))
{
	const char	*set;
	size_t		i;

	set = "cspdiuxX%";
	i = 0;
	while (set[i] != '\0' && set[i] != c)
		i++;
	f[i](to_print);
}

int	ft_printf(const char *s, ...)
{
	const char	*str;
	va_list		param;
	void		*curr;
	size_t		i;
	void (*print_func[9])();


	init_print(print_func);
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
			break ;
		curr = va_arg(param, void*);
		i++;
		what_func(str[i], curr, print_func);
		i++;
	}
	va_end(param);
	return (0);
}

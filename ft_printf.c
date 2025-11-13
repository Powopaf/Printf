/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:02:26 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/13 10:47:44 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * TODO: write until end of string OR when we find a %
 * when % is find  -> check next char end see if it's in the following list
 * cspdiuxX%
 * utiliser va_* pour lire les ...
 */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	const char	*str;
	va_list		param;
	void		*curr;

	str = s;
	va_start(param, s);

	while (1)
	{
		/*
		 * loop to print here until % is met
		 */
		curr = va_arg(param, void*);
		if (!curr)
			break ;

	}
	return (0);
}

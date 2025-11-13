/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:32:07 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/13 18:20:28 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *, ...) __attribute__((format(printf, 1, 2)));

int	print_char(void *c);
int	print_string(void *s);
int	print_percent(void *p);

int	print_int(void *i);
int	print_uint(void *u);

int	print_lhex(void *l);
int	print_uhex(void *u);
int	print_p(void *p);

#endif

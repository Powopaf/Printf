/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:32:07 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/13 17:16:08 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *, ...) __attribute__((format(printf, 1, 2)));

void	print_char(void *c);
void	print_string(void *s);
void	print_percent(void *p);

void	print_int(void *i);
void	print_uint(void *u);

void	print_lhex(void *l);
void	print_uhex(void *u);
void	print_p(void *p);

#endif

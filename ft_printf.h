/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <pifourni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:32:07 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/17 11:05:44 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>
# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(const char *format, ...)
	__attribute__((format(printf, 1, 2)));

int	print_char(char c);
int	print_str(char *s);
int	print_percent(void);

int	print_int(int i);
int	print_uint(unsigned int u);

int	print_lhex(unsigned int l);
int	print_uhex(unsigned int u);
int	print_p(uintptr_t p);

#endif

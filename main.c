/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pifourni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:52:37 by pifourni          #+#    #+#             */
/*   Updated: 2025/11/15 00:25:04 by pifourni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
	{
		int a = ft_printf("hello = ");
		int aa = printf("hello\n");
		printf("%d = %d\n\n", a, aa + 2);
	}
	{
		int a = ft_printf("%c = ", 'a');
		int aa = printf("%c\n", 'a');
		printf("%d = %d\n\n", a, aa + 1);
	}
	{
		int a = ft_printf("%s = ", "123");
		int aa =printf("%s\n", "123");
		printf("%d = %d\n\n", a, aa + 2);
	}
	{
		int a = ft_printf("%% = ");
		int aa = printf("%%\n");
		printf("%d = %d\n\n", a, aa + 2);
	}
	{
		int a = ft_printf("%d = ", 5);
		int aa = printf("%d\n", 5);
		printf("%d = %d\n\n", a, aa + 2);
	}
	{
		int a = ft_printf("%i = ", -123);
		int aa = printf("%d\n", -123);
		printf("%d = %d\n\n", a, aa + 2);
	}
	{
		int c = 123;
		int *p = &c;
		int *pp = NULL;
		int a = ft_printf("%p = ", p);
		int aa = printf("%p\n", p);
		int b = ft_printf("%p = ", pp);
		int bb = printf("%p\n", pp);
		printf("%d = %d \n", a, aa + 2);
		printf("%d = %d\n\n", b, bb + 2);
	}
	{
		int a = ft_printf("%u = ", 0xffffffff);
		int aa = printf("%u\n", 0xffffffff);
		printf("%d = %d\n\n", a, aa + 2);
	}
	{
		int a = ft_printf("%x = ", 48879);
		int aa = printf("%x\n", 48879);
		printf("%d = %d\n\n", a, aa + 2);
	}
	{
		int a = ft_printf("%X = " , -46872);
		int aa = printf("%X\n", -46872);
		printf("%d = %d\n", a, aa + 2);
	}
	/*{
		int a = ft_printf(NULL);
		printf("\n");
		int aa = printf(NULL);
		printf("\n%d = %d\n\n", a, aa);
	}*/
	return (0);
}

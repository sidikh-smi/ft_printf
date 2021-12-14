/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:53:44 by skhaliff          #+#    #+#             */
/*   Updated: 2021/12/14 15:21:05 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_print(va_list arg, const char s)
{
	int	len_frm;

	len_frm = 0;
	if (s == 'c')
		len_frm += ft_putchar(va_arg(arg, int));
	else if (s == 'd' || s == 'i')
		len_frm += ft_putnbr(va_arg(arg, int));
	else if (s == '%')
		len_frm += ft_putchar('%');
	else if (s == 's')
		len_frm += ft_putstr(va_arg(arg, char *));
	else if (s == 'p')
		len_frm += ft_prt_adrs(va_arg(arg, unsigned long));
	else if (s == 'u')
		len_frm += ft_prt_uns(va_arg(arg, unsigned int));
	else if (s == 'x' || s == 'X')
		len_frm += ft_prt_hex(va_arg(arg, unsigned int), s);
	return (len_frm);
}

int	ft_printf(const char *format, ...)
{
	int		len_frm;
	va_list	arg;
	int		i;

	i = 0;
	len_frm = 0;
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len_frm = len_frm + put_print(arg, format[i + 1]);
			i++;
		}
		else
			len_frm += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (len_frm);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:11:21 by skhaliff          #+#    #+#             */
/*   Updated: 2021/12/04 18:33:33 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<unistd.h>
# include<stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putstr(char *s);
int		ft_putp(char c);
int		ft_putnbr(int n);
int		ft_putchar(const char c);
int		ft_prt_adrs(unsigned long ptr);
int		ft_prt_hex(unsigned int num, const char format);
int		ft_prt_uns(unsigned int n);

#endif

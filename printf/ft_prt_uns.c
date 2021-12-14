/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_uns.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:25:30 by skhaliff          #+#    #+#             */
/*   Updated: 2021/12/04 19:35:58 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static unsigned int	size_of_n(unsigned int n)
{
	unsigned int	i;

	i = 1;
	while (n / 10)
	{
		n = n / 10;
		i *= 10;
	}
	return (i);
}

int	ft_prt_uns(unsigned int n)
{
	int				count;
	unsigned int	len;

	len = size_of_n(n);
	count = 0;
	while (len != 0)
	{
		count += ft_putchar((n / len) + '0');
		n = n % len;
		len /= 10;
	}
	return (count);
}

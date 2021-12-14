/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prt_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhaliff <skhaliff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 21:25:52 by skhaliff          #+#    #+#             */
/*   Updated: 2021/12/02 22:10:27 by skhaliff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_len_hex(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar((num + '0'));
		else
		{
			if (format == 'x')
				ft_putchar((num - 10 + 'a'));
			if (format == 'X')
				ft_putchar((num - 10 + 'A'));
		}
	}
}

int	ft_prt_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_len_hex(num));
}

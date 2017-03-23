/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahantar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 14:12:52 by kahantar          #+#    #+#             */
/*   Updated: 2017/03/14 12:55:24 by kahantar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr(int n)
{
	long int	i;

	i = n;
	if (i == 0)
		ft_putchar(48);
	if (i < 0 && i >= -2147483648)
	{
		ft_putchar('-');
		i = -i;
	}
	if (i >= 10 && i <= 2147483648)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	if (i > 0 && i < 10)
	{
		ft_putchar('0' + i);
	}
}

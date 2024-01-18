/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <acherraq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:08:19 by acherraq          #+#    #+#             */
/*   Updated: 2024/01/18 18:42:23 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count(long n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		counter = 1;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

int	ft_putnbr(int nb)
{
	long	nbr;
	int		l;

	nbr = nb;
	l = ft_count(nbr);
	if (nbr == -2147483648)
	{
		ft_putnbr(nbr / 10);
		ft_putchar('8');
	}
	else if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		ft_putnbr(nbr);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar('0' + nbr);
	return (l);
}

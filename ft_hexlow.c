/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <acherraq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:51:03 by acherraq          #+#    #+#             */
/*   Updated: 2024/01/18 15:18:41 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_count(unsigned int hex)
{
    int i;
    i = 0;
    if (hex == 0)
        return (1);
    while (hex != 0)
    {
       i++;
       hex /= 16; 
    }
    return (i);
}

int ft_hexlow(unsigned int h)
{
    char c;
    int count;

    count = ft_count(h);
    static char tab[] = "0123456789abcdef";
    if (h / 16 == 0)
    {
        c = tab[h % 16];
        ft_putchar(c);
    }
    else
    {
        ft_hexlow(h / 16);
        ft_hexlow(h % 16);
    }
return (count);
}
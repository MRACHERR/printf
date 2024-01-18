/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <acherraq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:15:19 by acherraq          #+#    #+#             */
/*   Updated: 2024/01/18 15:19:37 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_count(unsigned int hex)
{
    int i;
    i = 0;
    if (hex == 0)
        return (1);
    while (hex > 0)
    {
       hex /= 16; 
       i++;
    }
    return (i);
}

int ft_hexup(unsigned int h)
{
    char c;
    char *T;
    int count;

    count = ft_count(h);
    T = "0123456789ABCDEF";
    if (h / 16 == 0)
    {
        c = T[h % 16];
        ft_putchar(c);
    }
    else
    {
        ft_hexup(h / 16);
        ft_hexup(h % 16);
    }
return (count);
}
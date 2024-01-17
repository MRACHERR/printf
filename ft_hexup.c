/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <acherraq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:15:19 by acherraq          #+#    #+#             */
/*   Updated: 2024/01/17 17:51:42 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_count(unsigned int hex)
{
    int i;
    i = 0;
    while (hex > 0)
    {
       hex /= 16; 
       i++;
    }
    return (i);
}

int ft_hexup(unsigned int h)
{
    char * tab;
    char c;
    int count;

    count = ft_count(h);
    tab = "0123456789ABCDEF";
    if (h / 16 == 0)
    {
        c = tab[h % 16];
        ft_putchar(c);
    }
    else
    {
        ft_hexup(h / 16);
        ft_hexup(h % 16);
    }
return (0);
}
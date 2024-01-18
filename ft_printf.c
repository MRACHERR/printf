/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <acherraq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:58:28 by acherraq          #+#    #+#             */
/*   Updated: 2024/01/18 14:27:30 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_printf(const char *s, ...)
{
    int count;
    int i;
    va_list  ptr;
    va_start(ptr, s);

    if (!s)
		return (0);
    count = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == '%')
        {
            if (s[i + 1] == '\0')
                break ;
            count += ft_format(ptr, s[++i]);
        }
        else
        {
            ft_putchar(s[i]);
            count++;
        }
        i++;
    }
    va_end(ptr);
    return (count);
}
#include <stdio.h>
/*
int main()
{
    printf("%d",ft_printf("%d", 120));
    printf("\n\n\n\n\n");
    printf("%d",printf("%d", 120));
    // char c = 'z';
    // ft_printf("%u\n %s \n %p\n\n\n", -214748364, "hellloc fuc", &c);
    // printf("%u\n %s \n %p", -214748364, "hellloc fuc", &c);
    //printf("%d", c);
    //printf("%d",-2147483648); 
}
*/
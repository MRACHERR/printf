/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acherraq <acherraq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:37:23 by acherraq          #+#    #+#             */
/*   Updated: 2024/01/16 22:48:56 by acherraq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_format(va_list ptr, const char format)
{
    int count = 0;
    
    if (format == 'c')
    {
        count += ft_putchar(ar_arg(ptr, ));
    }
    return 0;
}
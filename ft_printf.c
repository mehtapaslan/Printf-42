/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:12:38 by mehaslan          #+#    #+#             */
/*   Updated: 2026/09/09 21:01:15 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_specifier(va_list lst, char format)
{
	int counter;

	counter = 0;
	if(format == 'c')
		ft_print_char(&counter, va_arg(lst, int));
	else if(format == 's')
		ft_print_str(&counter, va_arg(lst, char *));
	else if(format == 'p')
		ft_print_ptr(&counter, va_arg(lst, unsigned long));
	else if(format == 'd' || format == 'i')
		ft_print_nbr(&counter, va_arg(lst, int));
	else if(format == 'u')
		ft_print_unnbr(&counter, va_arg(lst, unsigned int));
	else if(format == 'x' || format == 'X')
		ft_print_hex(&counter, va_arg(lst, unsigned int), format);
	else if(format == '%')
		ft_print_char(&counter, '%');
	return(counter);
}

int ft_printf(const char *format, ...)
{
	va_list lst;
	int len;
	
	len = 0;
	if (!format)
		return (-1);
	va_start(lst, format);
	while(*format)
	{
		if(*format == '%')
		{
			format++;
			if (!*format)
                break;
			len += ft_specifier(lst, *format);
		}
		else
			ft_print_char(&len, *format);
		format++;
	}
	va_end(lst);
	return(len);
}
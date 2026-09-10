/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 19:06:07 by mehaslan          #+#    #+#             */
/*   Updated: 2026/09/09 20:47:06 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(int *counter, unsigned long nbr, char format)
{
	char	*str;

	if (format == 'x')
		str = "0123456789abcdef";
	else
		str = "0123456789ABCDEF";
	if (nbr >= 16)
	{
		ft_print_hex(counter, nbr/16, format);
		ft_print_hex(counter, nbr%16, format);
	}
	else
	{
		write(1, &str[nbr], 1);
		(*counter)++;
	}
}

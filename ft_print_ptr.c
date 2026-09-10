/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:22:25 by mehaslan          #+#    #+#             */
/*   Updated: 2026/09/09 18:41:25 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 	ft_print_ptr(int *counter, unsigned long ptr)
{
	if (!ptr)
	{
		write(1, "(nil)", 5);
		(*counter) += 5;
		return ;
	}
	write(1, "0x", 2);
	(*counter)+=2;
	ft_print_hex(counter, ptr, 'x');
}
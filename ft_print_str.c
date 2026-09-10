/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 13:59:59 by mehaslan          #+#    #+#             */
/*   Updated: 2026/09/09 20:59:32 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(int *counter, char *str)
{
	int i;
	
	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
		i++;
	write(1, str, i);
	(*counter) += i;
}

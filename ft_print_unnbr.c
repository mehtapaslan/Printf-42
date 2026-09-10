/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_un.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 18:39:46 by mehaslan          #+#    #+#             */
/*   Updated: 2026/09/08 19:03:49 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unnbr(int *counter, unsigned int nbr)
{
	char	a;
	
	if (nbr >= 10)
	{
		ft_print_unnbr(counter, nbr / 10);
		ft_print_unnbr(counter, nbr % 10);
	}
	else
	{
		a = nbr + '0';
		write(1, &a, 1);
		(*counter)++;
	}
}
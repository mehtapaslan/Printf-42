/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/08 14:46:08 by mehaslan          #+#    #+#             */
/*   Updated: 2026/09/09 20:51:03 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int *counter, int nbr)
{
	char	a;

	if (nbr == -2147483648)
	{
		write (1, "-2147483648", 11);
		(*counter) += 11;
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
		(*counter)++;
	}
	if (nbr >= 10)
	{
		ft_print_nbr(counter, nbr / 10);
		ft_print_nbr(counter, nbr % 10);
	}
	else
	{
		a = nbr + '0';
		write(1, &a, 1);
		(*counter)++;
	}
}

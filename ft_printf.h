/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehaslan <mehaslan@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 17:01:17 by mehaslan          #+#    #+#             */
/*   Updated: 2026/09/09 21:00:47 by mehaslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int 	ft_printf(const char *format, ...);
void 	ft_print_char(int *counter, char c);
void	ft_print_hex(int *counter, unsigned long nbr, char format);
void	ft_print_nbr(int *counter, int nbr);
void	ft_print_unnbr(int *counter, unsigned int nbr);
void 	ft_print_ptr(int *counter, unsigned long ptr);
void	ft_print_str(int *counter, char *str);

#endif
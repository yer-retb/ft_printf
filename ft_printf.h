/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:16:32 by yer-retb          #+#    #+#             */
/*   Updated: 2021/12/12 01:37:20 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		g_count;
int		ft_printf(const char *format, ...);
void	ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_putnbr(long long n);
void	ft_puthexa(unsigned long n, char letter);

#endif

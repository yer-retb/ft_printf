/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-retb <yer-retb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:55:17 by yer-retb          #+#    #+#             */
/*   Updated: 2021/12/13 15:18:18 by yer-retb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned long num, char letter)
{
	char			*a;

	if (letter == 'x')
		a = "0123456789abcdef";
	else if (letter == 'X')
		a = "0123456789ABCDEF";
	if (num < 16)
	{
		ft_putchar(a[num]);
	}
	else
	{
		ft_puthexa(num / 16, letter);
		ft_puthexa(num % 16, letter);
	}
}

int main ()
{
	int d = 372;
	ft_puthexa (d, 'x');
}
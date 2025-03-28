/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:49:21 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/20 18:12:50 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -214783648)
	{
		write (1, "-214783648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

//int main(void)
//{
//	ft_putnbr(42);
//	ft_putchar('\n');
//	ft_putnbr(-214783648);
//        ft_putchar('\n');
//	ft_putnbr(0);
//       ft_putchar('\n');
//	ft_putnbr(123456);
//        ft_putchar('\n');
//	return (0);
//	}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 23:21:30 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/22 23:28:01 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = x / *b;
	*b = x % *b;
}

//int main()
//{
//	int a = 21;
//	int b = 3;
//
//	ft_ultimate_div_mod(&a, &b);
//	return (0);
//}

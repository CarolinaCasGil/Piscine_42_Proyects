/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 23:10:25 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/22 23:20:29 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int main ()
//{
//	int a;
//	int b;
//	int div;
//	int mod;
//
//	a = 4;
//	b = 3;
//	ft_div_mod(a, b, &div, &mod);
//	return (0);
//}

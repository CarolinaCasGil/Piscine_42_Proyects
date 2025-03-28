/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:28:02 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/20 15:42:27 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Función que muestra "N" si n es negativo, "P" si es positivo o cero
void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

// Función principal para probar ft_is_negative
//int main()
//{
//	ft_is_negative(-5); // Muestra "N"
//	ft_is_negative(0);  // Muestra "P"
//	 return 0;
//}

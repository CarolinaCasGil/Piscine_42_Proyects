/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:24:11 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/20 12:14:07 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Función que imprime un carácter
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//int main() {
//    ft_putchar('A'); // Imprime 'A'
//    ft_putchar('\n'); // Imprime un salto de línea
//    return 0;
//}

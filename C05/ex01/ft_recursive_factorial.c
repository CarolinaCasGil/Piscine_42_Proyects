/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:55:21 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/09 17:43:40 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main() {
    int number = 5;
    int factorial = ft_recursive_factorial(number);

    if (factorial != 0) {
        printf("El factorial de %d es %d\n", number, factorial);
    } else {
        printf("Número no válido para calcular el factorial.\n");
    }

    return 0;
}*/

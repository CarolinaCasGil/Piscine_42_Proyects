/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:28:30 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/09 18:44:14 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main() {
    int base = 2;
    int exponent = 3; // Cambia este valor para probar con otros exponentes
    int result = ft_recursive_power(base, exponent);
    printf("%d elevado a %d es: %d\n", base, exponent, result);
    return 0;
}*/

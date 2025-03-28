/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:43:16 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/08 17:29:33 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
/*
int main() {
    int number = 5;
    int factorial = ft_iterative_factorial(number);

    if (factorial != 0) {
        printf("El factorial de %d es %d\n", number, factorial);
    } else {
        printf("Número no válido para calcular el factorial.\n");
    }

    return 0;
}*/

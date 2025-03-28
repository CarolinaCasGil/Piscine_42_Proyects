/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 19:05:59 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/09 19:16:12 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int main() {
    int number = 16; // Cambia este valor para probar con otros números
    int result = ft_sqrt(number);
    if (result != 0) {
        printf("La raíz cuadrada entera de %d es: %d\n", number, result);
    } else {
        printf("La raíz cuadrada de %d no es entera.\n", number);
    }
    return 0;
}*/

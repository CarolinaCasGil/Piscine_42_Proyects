/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 02:25:02 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/23 02:37:11 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	start;
	int	end;

	start = 0;
	end = start - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

/*
void ft_putnbr(int n) {
    char buffer[12]; // Suficiente para almacenar un número entero
    int i = 0;

    // Manejo de números negativos
    if (n < 0) {
        write(1, "-", 1);
        n = -n;
    }

    // Convertir el número a string en orden inverso
    if (n == 0) {
        write(1, "0", 1);
        return;
    }

    // Convertir el número a string
    while (n > 0) {
        buffer[i++] = (n % 10) + '0'; // Convertir dígito a carácter
        n /= 10;
    }

    // Escribir el número en orden correcto
    while (i > 0) {
        write(1, &buffer[--i], 1);
    }
}

int main(void) {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    // Llamar a la función para invertir el array
    ft_rev_int_tab(array, size);

    // Imprimir el array invertido
    for (int i = 0; i < size; i++) {
        ft_putnbr(array[i]); // Usar la función para imprimir cada número
        write(1, " ", 1); // Imprimir un espacio entre los números
    }
    write(1, "\n", 1); // Nueva línea

    return 0;
}*/

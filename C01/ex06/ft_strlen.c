/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 00:29:13 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/03 13:06:47 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

/*
void ft_putnbr(int n) {
    if (n < 0) {
        write(1, "-", 1);
        n = -n;
    }

    if (n == 0) {
        write(1, "0", 1);
        return;
    }

    char buffer[10]; // Suficiente para almacenar un número entero
    int i = 0;

    // Convertir el número a string en orden inverso
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
    char myString[] = "Hola, mundo!";
    int length = ft_strlen(myString);

    // Usar la función para imprimir la longitud
    ft_putnbr(length);
    write(1, "\n", 1); // Nueva línea

    return 0;
}
*/

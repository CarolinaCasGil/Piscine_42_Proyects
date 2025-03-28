/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 01:52:45 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/25 02:06:58 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*original;

	original = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (original);
}

/*
void write_string(char *str) {
    while (*str) {
        write(1, str, 1); // Escribimos cada carácter
        str++;
    }
    write(1, "\n", 1); // Escribimos un salto de línea
}

// Ejemplo de uso
int main() {
    char str1[] = "hello world"; // String de prueba
    char str2[] = "C programming"; // Otro string de prueba

    write_string(ft_strupcase(str1)); // Debería imprimir "HELLO WORLD"
    write_string(ft_strupcase(str2)); // Debería imprimir "C PROGRAMMING"

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 02:07:27 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/27 10:07:28 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*original;

	original = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + ('a' - 'A');
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
int main(void) {
    char str1[] = "HELLO WORLD"; // String de prueba
    char str2[] = "C PROGRAMMING"; // Otro string de prueba

    write_string(ft_strlowcase(str1)); // Debería imprimir "hello world"
    write_string(ft_strlowcase(str2)); // Debería imprimir "c programming"

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 01:23:45 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/25 01:36:43 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
void write_result(int result) {
    char c = result + '0'; // Convertimos el número a carácter
    write(1, &c, 1); // Escribimos el carácter
    write(1, "\n", 1); // Escribimos un salto de línea
}

// Ejemplo de uso
int main() {
    char *test1 = "HELLO";
    char *test2 = "Hello";
    char *test3 = "123";
    char *test4 = "";

    write_result(ft_str_is_uppercase(test1)); // Debería imprimir 1
    write_result(ft_str_is_uppercase(test2)); // Debería imprimir 0
    write_result(ft_str_is_uppercase(test3)); // Debería imprimir 0
    write_result(ft_str_is_uppercase(test4)); // Debería imprimir 1

    return 0;
}*/

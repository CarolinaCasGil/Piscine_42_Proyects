/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:49:53 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/25 01:14:44 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*
void write_result(int result) {
    char *output;
    if (result == 1) {
        output = "1\n";
    } else {
        output = "0\n";
    }
    write(1, output, 2); // Escribir el resultado en la salida estándar
}

int main() {
    char *test1 = "hello";
    char *test2 = "Hello";
    char *test3 = "hello123";
    char *test4 = "";

    write_result(ft_str_is_lowercase(test1)); // Debería imprimir 1
    write_result(ft_str_is_lowercase(test2)); // Debería imprimir 0
    write_result(ft_str_is_lowercase(test3)); // Debería imprimir 0
    write_result(ft_str_is_lowercase(test4)); // Debería imprimir 1

    return 0;
}*/

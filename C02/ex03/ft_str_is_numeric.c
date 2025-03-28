/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 20:05:28 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/24 20:43:48 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
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
    write(1, output, 2);
}

int main() {
    char *test1 = "123456";
    char *test2 = "123abc";
    char *test3 = "";
    
    write_result(ft_str_is_numeric(test1)); // Debería imprimir 1
    write_result(ft_str_is_numeric(test2)); // Debería imprimir 0
    write_result(ft_str_is_numeric(test3)); // Debería imprimir 1

    return 0;
}*/

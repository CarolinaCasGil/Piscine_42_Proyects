/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:55:37 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/04 12:03:26 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_upper_lower(char *str, int new_word)
{
	if (new_word && (*str >= 'a' && *str <= 'z'))
	{
		*str -= 32;
		new_word = 0;
	}
	else if (!new_word && (*str >= 'A' && *str <= 'Z'))
	{
		*str += 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	new_word;
	int	i;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			ft_upper_lower(&str[i], new_word);
			new_word = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			new_word = 0;
		}
		else
		{
			new_word = 1;
		}
		i++;
	}
	return (str);
}

/*
int main() {
    char str[] = "[1]dfscv>~[qd*@vwel23";

    ft_strcapitalize(str); // Capitalizar la cadena

    // Imprimir la cadena resultante
    char *ptr = str; // Puntero para recorrer la cadena
    while (*ptr) // Recorrer hasta el final de la cadena
    {
        write(1, ptr, 1); // Escribir un carácter a la vez
        ptr++; // Avanzar al siguiente carácter
    }

    write(1, "\n", 1); // Escribir un salto de línea

    return 0;
}*/

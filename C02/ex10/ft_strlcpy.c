/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 10:19:14 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/27 13:15:15 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
// Función para escribir una cadena en la salida estándar
void ft_putstr(const char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

// Función para escribir un número en la salida estándar
void ft_putnbr(unsigned int n)
{
  	 char c = '0' + (n % 10);
       	write(1, &c, 1);
}

int main(void)
{
    char dest[20];
   char *src = "Hello, World!";
    unsigned int size;

    // Ejemplo 1: Copia con suficiente espacio
    size = 20;
    unsigned int len1 = ft_strlcpy(dest, src, size);
    write(1, "Ejemplo 1: ", 11);
    ft_putstr(dest);
    write(1, ", Longitud: ", 12);
    ft_putnbr(len1);
    write(1, "\n", 1);

    // Ejemplo 2: Copia con espacio insuficiente
    size = 5;
    unsigned int len2 = ft_strlcpy(dest, src, size);
    write(1, "Ejemplo 2: ", 11);
    ft_putstr(dest);
    write(1, ", Longitud: ", 12);
    ft_putnbr(len2);
    write(1, "\n", 1);

    return 0;
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 09:45:09 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/23 11:09:09 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*original;

	original = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original);
}

/*
int main() {
	char src[] = "Hola, mundo!";
    char dest[50];

    ft_strcpy(dest, src);

    int length = 0;
    while (dest[length] != '\0') {
        length++;
    }

    write(1, dest, length);

    return 0;
}*/

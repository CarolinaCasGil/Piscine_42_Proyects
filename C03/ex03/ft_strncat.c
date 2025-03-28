/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:17:08 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/05 18:13:04 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	x;

	x = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[x] != '\0' && x < nb)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main()
{
    char dest[100] = "como";
    char *src = "hola";
    unsigned int x = 3;

    ft_strncat(dest, src, x);
    write(1, dest, 8);
    write(1, "\n", 1);
    return 0;
}*/

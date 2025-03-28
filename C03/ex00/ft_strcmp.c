/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:42:30 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/06 07:42:24 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
int main()
{
    char *str1 = "Hola";
    char *str2 = "Hola";
    char *str3 = "Hola Mundo";
    char *str4 = "Adiós";

    int result1 = ft_strcmp(str1, str2);
    int result2 = ft_strcmp(str1, str3);
    int result3 = ft_strcmp(str1, str4);
    int result4 = ft_strcmp(str3, str4);

    printf("Comparando '%s' y '%s': %d\n", str1, str2, result1);
    printf("Comparando '%s' y '%s': %d\n", str1, str3, result2);    
    printf("Comparando '%s' y '%s': %d\n", str1, str4, result3);
    printf("Comparando '%s' y '%s': %d\n", str3, str4, result4);

    return 0;
}*/

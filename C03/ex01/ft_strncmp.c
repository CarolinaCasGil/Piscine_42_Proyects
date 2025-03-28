/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:15:11 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/09 14:13:46 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h> 

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (*s1 || *s2))
	{
		if ((*s1 - *s2) != 0)
			return (*s1 - *s2);
		i++;
		s1++;
		s2++;
	}
	return (0);
}
/*
int main() {
    char str1[] = "Hello";
    char str2[] = "Hello, World!";
    char str3[] = "Hellz";
    char str4[] = "Hello";
    
    printf("Comparando '%s' y '%s' (n=5): %d\n", 
    	str1, str2, ft_strncmp(str1, str2, 5));
    printf("Comparando '%s' y '%s' (n=5): %d\n", 
    	str1, str3, ft_strncmp(str1, str3, 5));
    printf("Comparando '%s' y '%s' (n=5): %d\n", 
    	str1, str4, ft_strncmp(str1, str4, 5));
    printf("Comparando '%s' y '%s' (n=10): %d\n", 
    	str1, str2, ft_strncmp(str1, str2, 10));
    return 0;
}*/

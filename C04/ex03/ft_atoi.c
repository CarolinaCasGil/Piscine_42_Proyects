/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 09:18:15 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/08 17:02:57 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/*
int main()
{
    // Pruebas de la función ft_atoi
    char *test1 = "   42";
    char *test2 = "   -42";
    char *test3 = "   -+-++-+42";
    char *test4 = "   0";
    char *test5 = "   -2147483648";
    char *test6 = "   2147483647";  
    char *test7 = "   +123abc";     
    char *test8 = "   -abc123"; 

    printf("ft_atoi(\"%s\") = %d\n", test1, ft_atoi(test1));
    printf("ft_atoi(\"%s\") = %d\n", test2, ft_atoi(test2));
    printf("ft_atoi(\"%s\") = %d\n", test3, ft_atoi(test3));
    printf("ft_atoi(\"%s\") = %d\n", test4, ft_atoi(test4));
    printf("ft_atoi(\"%s\") = %d\n", test5, ft_atoi(test5));
    printf("ft_atoi(\"%s\") = %d\n", test6, ft_atoi(test6));
    printf("ft_atoi(\"%s\") = %d\n", test7, ft_atoi(test7));
    printf("ft_atoi(\"%s\") = %d\n", test8, ft_atoi(test8));

    return 0;
}*/

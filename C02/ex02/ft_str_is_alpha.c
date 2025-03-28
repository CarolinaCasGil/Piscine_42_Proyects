/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:17:46 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/24 20:44:37 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
    char *test1 = "HelloWorld";
    char *test2 = "Hello123";
    char *test3 = "";

    write_result(ft_str_is_alpha(test1));
    write_result(ft_str_is_alpha(test2));
    write_result(ft_str_is_alpha(test3));

    return 0;
}*/

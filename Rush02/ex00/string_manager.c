/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_manager.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:22:53 by matoledo          #+#    #+#             */
/*   Updated: 2025/03/09 13:31:36 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_length(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

void	print_string_array(char *str, int i)
{
	while (*str)
	{
		write(i, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 - *s2 != 0)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	while(*str)
	{
		if(ft_strcmp(str, to_find) == 0)
			return(str);
		str++;
	}
	return (0);
}

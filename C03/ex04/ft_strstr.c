/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:22:37 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/06 04:09:50 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	while1(int i, int l, char *str, char *to_find)
{
	int	a;

	a = 0;
	while (str[i + a] == to_find[a])
	{
		if (a == (l - 1))
			return (1);
		else if (a < l)
			a++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int			i;
	int			l;
	char		*ptr;

	i = 0;
	l = 0;
	while (to_find[l])
		l++;
	if (l > 0)
	{
		while (str[i])
		{
			if (str[i] == to_find[0])
			{
				if (while1 (i, l, str, to_find))
					return (ptr = &str[i]);
			}
			i++;
		}
	}
	else
		return (ptr = &str[0]);
	return (0);
}
/*
int main()
{
    char str[] = "Hola mundo";
    char to_find[] = "mundo";
    char *result = ft_strstr(str, to_find);

    if (result)
        write(1, result, 5);
    else
        write(1, "No encontrado", 13);
    write(1, "\n", 1);
    return (0);
}*/

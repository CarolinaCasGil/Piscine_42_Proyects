/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:45:44 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/08 16:19:19 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
void	ft_putnbr(int x)
{
	if (x < 0)
	{
	 	write(1, "-", 1);
        x = -x;
	}
	if (x >= 10)
		ft_putnbr(x / 10);
	char digit = (x % 10) + '0'; 
	write (1, &digit , 1);
}

int	main(void)
{
	char	*str = "hola que tal";
	int x = ft_strlen(str);
	ft_putnbr(x);
	return (0);
}*/

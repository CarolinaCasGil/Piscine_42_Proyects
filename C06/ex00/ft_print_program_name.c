/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:14:00 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/12 00:52:52 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argsc, char **argsv)
{
	int	i;

	i = 0;
	if (argsc < 2)
	{
		while (argsv[0][i] != '\0')
		{
			ft_putchar(argsv[0][i]);
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}

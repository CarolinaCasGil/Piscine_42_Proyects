/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:24:43 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/11 18:57:27 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *x)
{
	int	i;

	i = 0;
	while (x[i] != '\0')
	{
		write (1, &x[i], 1);
		i++;
	}
}

int	main(int argsc, char **argsv)
{
	int	i;

	i = 1;
	while (i < argsc)
	{
		ft_putstr(argsv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

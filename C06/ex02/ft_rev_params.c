/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:19:32 by carcasti          #+#    #+#             */
/*   Updated: 2025/03/12 00:55:45 by carcasti         ###   ########.fr       */
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

	i = argsc;
	while (i > 1)
	{
		ft_putstr(argsv[i - 1]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:08:01 by matoledo          #+#    #+#             */
/*   Updated: 2025/03/09 12:44:59 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_string(char *str);
int		ft_length(char *str);

int	characters_invalid(char *str)
{
	while (*str)
	{
		if (*str == '+' || *str == '-'
			|| *str < '0' || *str > '9'
			|| *str == 32)
			return (1);
		str++;
	}
	return (0);
}

int	error_manager(char *str, int argc)
{
	if (argc <= 1 || argc >= 3)
		return (1);
	if (ft_length(str) > 37)
		return (1);
	if (characters_invalid(str) == 1)
		return (1);
	return (0);
}

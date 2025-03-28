/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:24:26 by matoledo          #+#    #+#             */
/*   Updated: 2025/03/09 21:40:50 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	dictionary_main(char *str);
void	print_string_array(char *str, int i);
int		error_manager(char *str, int argc);

int	main(int argc, char **argv)
{
	char	*str;

	argv++;
	str = *argv;
	if (error_manager(str, argc) == 1)
	{
		print_string_array("Error\n", 2);
		return (1);
	}
	dictionary_main(str);
	return (0);
}

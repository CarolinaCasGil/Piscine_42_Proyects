/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andfern2 <andfern2@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:56:58 by andfern2          #+#    #+#             */
/*   Updated: 2025/02/22 19:41:09 by andfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_correct_char(int a, int b, int x, int y)
{
	if ((b == 1 || b == y) && (a == 1 || a == x))
	{
		ft_putchar('o');
	}
	else
	{
		if (a != 1 && a != x && b != 1 && b != y)
		{
			ft_putchar(' ');
		}
		else if ((b == 1 || b == x) && a != 1 && a != y)
		{
			ft_putchar('-');
		}
		else if ((a == 1 || a == x) && b != 1 && b != y)
		{
			ft_putchar('|');
		}
	}
}

void	ft_print_error_message(void)
{
	int			i;
	const char	message[40] = "ERROR: Arguments should not be negative.";

	i = 0;
	while (i < 40)
	{
		ft_putchar(message[i]);
		i++;
	}
}

void	rush(int x, int y)
{
	int			a;
	int			b;

	if (x < 0 || y < 0)
	{
		ft_print_error_message();
	}
	else if (x > 0 && y > 0)
	{
		a = 1;
		b = 1;
		while (b <= y)
		{
			while (a <= x)
			{
				ft_print_correct_char(a, b, x, y);
				a++;
			}
			ft_putchar('\n');
			a = 1;
			b++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carcasti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:14:23 by carcasti          #+#    #+#             */
/*   Updated: 2025/02/21 11:17:39 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] != (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_generate_combn(int *arr, int n, int index, int start)
{
	if (index == n)
	{
		ft_print_number(arr, n);
		return ;
	}
	while (start <= 9)
	{
		arr[index] = start;
		ft_generate_combn(arr, n, index + 1, start + 1);
		start++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	if (n <= 0 || n >= 10)
		return ;
	ft_generate_combn(arr, n, 0, 0);
}

//int main(void)
//{
//	ft_print_combn(2);
//	ft_putchar('\n');
//	ft_print_combn(3);
//        ft_putchar('\n');
//	return (0);
//}

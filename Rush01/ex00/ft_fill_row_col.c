/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuno-im <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 12:00:04 by rnuno-im          #+#    #+#             */
/*   Updated: 2025/03/01 20:03:42 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar(char c);

void    ft_fill_14_41r(char **matrix, int grid[], int j, int x);
void    ft_fill_14_41c(char **matrix, int grid[], int j, int x);
void    ft_fill_12_21r(char **matrix, int grid[], int j, int x);
void    ft_fill_12_21c(char **matrix, int grid[], int j, int x);
void	ft_fillrow_rest(int row[],char **matrix);
void	ft_fillcol_rest(int col[],char **matrix);


void	ft_print(char **matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			ft_putchar(matrix[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
}


//Filas 1-4 o 4-1
void	ft_fillrow(int row[],char **matrix)
{
	int	j;
	j = 0;
	while (j < 4)
	{

		if((row[j] == 1 && row[j + 4] == 4) || (row[j] == 4 && row[j + 4] == 1))
		{
			ft_fill_14_41r(matrix, row, j, (j + 4));
		} 
        j++;
	}

}

//Columnas 1-4 o 4-1
void	ft_fillcol(int col[],char **matrix)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if((col[j] == 1 && col[j + 4] == 4) || (col[j] == 4 && col[j + 4] == 1))
		{
			ft_fill_14_41c(matrix, col, j, (j + 4));
		} 
        j++;
	}

}
//int col[],
void	ft_rest( int row[], char **matrix)
{
	ft_fillrow_rest(row, matrix);
	//ft_fillcol_rest(col, matrix);
}

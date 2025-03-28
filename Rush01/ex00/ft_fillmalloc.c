#include <stdlib.h>

void	ft_putchar(char c);
void    ft_fillrow(int row[],char **matrix);
void	ft_fillcol(int col[],char **matrix);
void    ft_rest(int row[], char **matrix);
void	ft_print(char **matrix);

void ft_init_matrix(char **matrix) {
    int i = 0, j;
    while (i < 4) {
        j = 0;
        while (j < 4) {
            matrix[i][j] = '0';  
            j++;
        }
        i++;
    }
}

void	ft_refillmalloc(int row[], int col[])
{
	char	**matrix;
	int	i;

	i = 0;
	matrix = (char **)malloc(4 * 8);
	while(i < 4)
	{
		matrix[i] = (char *)malloc(4);
		i++;
	}
    ft_init_matrix(matrix);
	ft_fillrow(row, matrix);
    ft_fillcol(col, matrix);
    ft_rest(row, matrix);
	ft_print(matrix);

	i = 0;
    while (i < 4)
    {
        free(matrix[i]);
        i++;
    }
    free(matrix);
}
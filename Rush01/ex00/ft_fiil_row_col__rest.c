
void	ft_putchar(char c);
void ft_fill_12_21r(char **matrix, int row[], int j1, int j2);
void ft_fill_12_21c(char **matrix, int col[], int j1, int j2);

void ft_fill_13_31r(char **matrix, int row[], int j1, int j2);
void ft_fill_13_31c(char **matrix, int col[], int j1, int j2);

void ft_fill_23_32r(char **matrix, int row[], int j1, int j2);
void ft_fill_23_32c(char **matrix, int col[], int j1, int j2);

void ft_fill_22r(char **matrix,  int j1);
void ft_fill_22c(char **matrix,  int j1);


//Resto de filas 
void	ft_fillrow_rest(int row[],char **matrix)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if((row[j] == 1 && row[j + 4] == 2) || (row[j] == 2 && row[j + 4] == 1))
		{
			ft_fill_12_21r(matrix, row, j, (j + 4));
		} 
		else if((row[j] == 1 && row[j + 4] == 3) || (row[j] == 3 && row[j + 4] == 1))
		{
			ft_fill_13_31r(matrix, row, j, (j + 4));
		}
		else if((row[j] == 2 && row[j + 4] == 3) || (row[j] == 3 && row[j + 4] == 2))
		{
			ft_fill_23_32r(matrix, row, j, (j + 4));
		} 
		else if((row[j] == 2 && row[j + 4] == 2))
		{
			ft_fill_22r(matrix, j);
		} 
		j++;
	}
}

//Columna de filas 
void	ft_fillcol_rest(int col[],char **matrix)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if((col[j] == 1 && col[j + 4] == 2) || (col[j] == 2 && col[j + 4] == 1))
		{
			ft_fill_12_21c(matrix, col, j, (j + 4));
		} 
		else if((col[j] == 1 && col[j + 4] == 3) || (col[j] == 3 && col[j + 4] == 1))
		{
			ft_fill_13_31c(matrix, col, j, (j + 4));
		} 
		else if((col[j] == 2 && col[j + 4] == 3) || (col[j] == 3 && col[j + 4] == 2))
		{
			ft_fill_23_32c(matrix, col, j, (j + 4));
		} 
		else if((col[j] == 2 && col[j + 4] == 2))
		{
			ft_fill_23_32c(matrix, col, j, (j + 4));
		}
		j++;
	}
}
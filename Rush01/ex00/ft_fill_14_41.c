void    ft_fill_14_41r(char **matrix, int grid[], int j, int x)
{
    if(grid[x] == 4)
    {
        matrix[j][0] = '4';
        matrix[j][1] = '3';
        matrix[j][2] = '2';
        matrix[j][3] = '1';
    }
    else
    {
        matrix[j][0] = '1';
        matrix[j][1] = '2';
        matrix[j][2] = '3';
        matrix[j][3] = '4';
    }
}

void    ft_fill_14_41c(char **matrix, int grid[], int j, int x)
{
    if(grid[x] == 4)
    {
        matrix[0][j] = '4';
        matrix[1][j] = '3';
        matrix[2][j] = '2';
        matrix[3][j] = '1';
    }
    else
    {
        matrix[0][j] = '1';
        matrix[1][j] = '2';
        matrix[2][j] = '3';
        matrix[3][j] = '4';
    }
}
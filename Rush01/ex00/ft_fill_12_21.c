void    ft_fill_12_21r(char **matrix, int grid[], int j, int x)
{  
    if(grid[x] == 2)
    {
        matrix[j][0] = '4';
        matrix[j][1] = '1';
        matrix[j][2] = '2';
        matrix[j][3] = '3';
    }
    else 
    { 
        matrix[j][0] = '3';
        matrix[j][1] = '2';
        matrix[j][2] = '1';
        matrix[j][3] = '4';
    }
}

void    ft_fill_12_21c(char **matrix, int grid[], int j, int x)
{
    if(grid[x] == 2)
    {
        matrix[0][j] = '4';
        matrix[3][j] = '3';
        if(matrix[1][j] == 2)
        {
            matrix[j][1] = '1';
            matrix[j][2] = '2';
        }
        else
        {
            matrix[j][1] = '2';
            matrix[j][2] = '1';
        }
    }
    else 
    {
        matrix[0][j] = '3';
        matrix[3][j] = '4';
        if(matrix[1][j] == 1)
        {
            matrix[j][1] = '1';
            matrix[j][2] = '2';
        }
        else
        {
            matrix[j][1] = '2';
            matrix[j][2] = '1';
        }
    }
}

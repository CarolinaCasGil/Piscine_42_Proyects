void    ft_fill_13_31r(char **matrix, int grid[], int j, int x)
{  
    if(grid[x] == 3)
    {
        matrix[j][0] = '4';
        matrix[j][1] = '1';
        matrix[j][2] = '3';
        matrix[j][3] = '2';
    }
    else 
    {
        matrix[j][0] = '2';
        matrix[j][1] = '1';
        matrix[j][2] = '3';
        matrix[j][3] = '4';
    }
}

void    ft_fill_13_31c(char **matrix, int grid[], int j, int x)
{
    if(grid[x] == 3)
    {
        matrix[3][j] = '4';
        matrix[0][j] = '2';
        if(matrix[1][j] == 3)
        {
            matrix[j][1] = '1';
            matrix[j][2] = '3';
        }
        else
        {
            matrix[j][1] = '1';
            matrix[j][2] = '3';
        }
    }
    else 
    {
        matrix[0][j] = '2';
        matrix[3][j] = '4';
        if(matrix[1][j] == 1)
        {
            matrix[j][1] = '1';
            matrix[j][2] = '3';
        }
        else
        {
            matrix[j][1] = '1';
            matrix[j][2] = '3';
        }
    }
}

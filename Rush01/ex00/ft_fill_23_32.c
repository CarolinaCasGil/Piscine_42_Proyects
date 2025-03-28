void	ft_putchar(char c);

void    ft_fill_23_32r(char **matrix, int grid[], int j, int x)
{  
    if(grid[j] == 3)
    {
        if(matrix[j][0] == '1')
        {
            matrix[j][0] = '1';
            matrix[j][1] = '4';
            matrix[j][2] = '3';
            matrix[j][3] = '2';
        }
        else if(matrix[j][0] == '2')
        {
            matrix[j][0] = '2';
            matrix[j][1] = '3';
            matrix[j][2] = '4';
            matrix[j][3] = '1';
        }
        else if(matrix[j][0] == '3')
        {
            matrix[j][0] = '3';
            matrix[j][1] = '4';
            matrix[j][2] = '2';
            matrix[j][3] = '1';
        }
      
    }
    else if(grid[x] == 3)
    {
         if(matrix[j][0] == '1')
        {
            matrix[j][0] = '2';
            matrix[j][1] = '3';
            matrix[j][2] = '4';
            matrix[j][3] = '1';
        }
        else if(matrix[j][0] == '2')
        {
            matrix[j][0] = '1';
            matrix[j][1] = '3';
            matrix[j][2] = '4';
            matrix[j][3] = '2';
        }
        else if(matrix[j][0] == '3')
        {
            matrix[j][0] = '1';
            matrix[j][1] = '2';
            matrix[j][2] = '4';
            matrix[j][3] = '3';
        }
    }
}

void    ft_fill_23_32c(char **matrix, int grid[], int j, int x)
{
   if(grid[j] == 3)
    {
        if(matrix[0][j] == '1')
        {
            matrix[0][j] = '1';
            matrix[1][j] = '4';
            matrix[2][j] = '3';
            matrix[3][j] = '2';
        }
        else if(matrix[j][0] == '2')
        {
            matrix[0][j] = '2';
            matrix[1][j] = '3';
            matrix[2][j] = '4';
            matrix[3][j] = '1';
        }
        else if(matrix[j][0] == '3')
        {
            matrix[0][j] = '3';
            matrix[1][j] = '4';
            matrix[2][j] = '2';
            matrix[3][j] = '1';
        }
      
    }
    else if(grid[x] == 3)
    {
         if(matrix[j][0] == '1')
        {
            matrix[0][j] = '2';
            matrix[1][j] = '3';
            matrix[2][j] = '4';
            matrix[3][j] = '1';
        }
        else if(matrix[j][0] == '2')
        {
            matrix[0][j] = '1';
            matrix[1][j] = '3';
            matrix[2][j] = '4';
            matrix[3][j] = '2';
        }
        else if(matrix[j][0] == '3')
        {
            matrix[0][j] = '1';
            matrix[1][j] = '2';
            matrix[2][j] = '4';
            matrix[3][j] = '3';
        }
    }
}
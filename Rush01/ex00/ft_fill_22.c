void	ft_putchar(char c);
void    ft_fill_22r(char **matrix, int j)
{  
    if(matrix[j][0] == '1')
    {
        matrix[j][0] = '1';
        matrix[j][1] = '4';
        matrix[j][2] = '2';
        matrix[j][3] = '3';
    }
    else if(matrix[j][0] == '2')
    {
        matrix[j][0] = '2';
        matrix[j][1] = '4';
        matrix[j][2] = '1';
        matrix[j][3] = '3';
    }
    else if(matrix[j][0] == '3')
    {
        matrix[j][0] = '3';
        matrix[j][1] = '4';
        matrix[j][2] = '1';
        matrix[j][3] = '2';
    }
      
}

void    ft_fill_22c(char **matrix,  int j)
{
     if(matrix[j][0] == '1')
    {
        matrix[0][j] = '1';
        matrix[1][j] = '4';
        matrix[2][j] = '2';
        matrix[3][j] = '3';
    }
    else if(matrix[j][0] == '2')
    {
        matrix[0][j] = '2';
        matrix[1][j] = '4';
        matrix[2][j] = '1';
        matrix[3][j] = '3';
    }
    else if(matrix[j][0] == '3')
    {
        matrix[0][j] = '3';
        matrix[1][j] = '4';
        matrix[2][j] = '1';
        matrix[3][j] = '2';
    }
}
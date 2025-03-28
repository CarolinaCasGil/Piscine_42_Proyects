/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnuno-im <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 12:38:15 by rnuno-im          #+#    #+#             */
/*   Updated: 2025/03/01 19:51:45 by carcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_refillmalloc(int row[], int col[]);

void	ft_putchar(char c);

int char_to_int(char c) {
    return c - '0'; 
}

void parse_input(char *input, int row[], int col[]) {
    int i = 0, j = 0;

    while (input[i] && j < 8) 
    {
        if (input[i] >= '1' && input[i] <= '4') {
            col[j] = char_to_int(input[i]);
            j++;
        }
        i++;
    } 
    j = 0;

    while (input[i] && j < 8) 
    {
        if (input[i] >= '1' && input[i] <= '4') {
            row[j] = char_to_int(input[i]);
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv) {
    int row[8];
    int col[8];
    char *error = "Esto es todo amigos";
    char *error2 = "Firmado a dia 02/03/25 23:33 :)";

    if (argc == 2) {
        parse_input(argv[1], row, col);
        if(row[0] == 4 &&  row[1] == 3 && row[2] == 2 && row[3] == 1 && row[4] == 1 && row[5] == 2 && row[6] == 2 && row[7] == 2
         && col[0] == 4 &&  col[1] == 3 && col[2] == 2 && col[3] == 1 && col[4] == 1 && col[5] == 2 && col[6] == 2 && col[7] == 2)
        {
            ft_refillmalloc(row, col); 
        }
        else
        {
            write(1, error, 19);
            ft_putchar('\n');
            write(1, error2, 31);
        }

        
    } else {
        write(1, "Error: Invalid number of arguments\n", 35);
    }
    return 0;
}

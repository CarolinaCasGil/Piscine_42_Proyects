/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matoledo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:33:35 by matoledo          #+#    #+#             */
/*   Updated: 2025/03/09 23:01:40 by matoledo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);

void	key_value(char *key, char *dic)
{
	char	*word;

	word = ft_strstr(dic, key);
	while (*word != 58)
		word++;
	while (*word == 58 || *word == 32)
		word++;
	while (*word != '\n')
	{
		write(1, word, 1);
		word++;
	}
	write(1, " ", 1);
}

void	block_number(char *number, char *dic, int counter)
{
	char	*single;
	char	*aux;
	int		unit;

	counter *= 3;
	aux = (char *)malloc(counter);
	unit = 0;
	single = (char *)malloc(2);
	while (unit <= 2)
	{
		if (*number != '0' && *number)
		{
			if (unit != 1)
			{
				*single = *number;
				*(single + 1) = '\0';
				key_value(single, dic);
				if (unit == 0)
				{
					write(1, "hundred", 7);
					write(1, " ", 1);
				}
			}
			else
			{
				if (*number == '1')
				{
					*single = *number;
					*(single + 1) = *(number + 1);
					key_value(single, dic);
					number++;
					unit++;
				}
				else
				{
					*single = *number;
					*(single + 1) = '0';
					key_value(single, dic);
				}
			}
		}
		number++;
		unit++;
	}
}

void	scale_number(int counter, char *dic)
{
	char	*aux;
	int		num;

	num = 0;
	counter *= 3;
	aux = (char *)malloc(counter);
	*aux = '1';
	while (num < counter)
	{
		num++;
		*(aux + num) = '0';
	}
	if (counter > 0)
		key_value(aux, dic);
}

void	putnbr(char *str, char *dic)
{
	int	counter;

	counter = 0;
	while (*(str + 3) >= '0' && *(str + 3) <= '9')
		str++;
	while (*(str + 2) >= '0' && *(str + 2) <= '9')
	{
		block_number(str, dic, counter);
		scale_number(counter, dic);
		counter++;
		str -= 3;
	}
}

void	ft_memcpy(char *dest, char *src, int size)
{
	while (size > 0)
	{
		*dest = *src;
		src++;
		dest++;
		size--;
	}
}

int	dictionary_main(char *str)
{
	char	*dic;
	char	*buffer;
	char	*temp;
	int		fp;
	int		sz;
	int		size;
	int		total;

	sz = 0;
	total = 0;
	size = 32;
	buffer = (char *)malloc(size);
	dic = (char *)malloc(size);
	fp = open("numbers.dict", O_RDONLY);
	while ((sz = read(fp, buffer, size)) > 0)
	{
		temp = (char *)malloc(total + sz);
		ft_memcpy(temp, dic, total);
		ft_memcpy(temp + total, buffer, sz);
		free(dic);
		dic = temp;
		total += sz;
	}
	close(fp);
	putnbr(str, dic);
	return (0);
}

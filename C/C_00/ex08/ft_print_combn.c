/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtasca-j <mtasca-j@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 23:39:50 by mtasca-j          #+#    #+#             */
/*   Updated: 2021/07/22 17:51:07 by mtasca-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	iter_function(char *str_begin, char *current_char, int n, char value);
void	print_str_number(char *str);
void	str_copy(char *destiny, char *source);

void	ft_print_combn(int n)
{
	char	number[10];
	char	*pointer_number;

	number[9] = '\0';
	pointer_number = number + 9 - n;
	iter_function(pointer_number, pointer_number, n, '0');
	print_str_number(0);
}

void	iter_function(char *str_begin, char *current_char, int n, char value)
{
	if (n)
	{
		*current_char = value;
		iter_function(str_begin, current_char + 1, n - 1, value + 1);
	}
	else
	{
		print_str_number(str_begin);
		return ;
	}
	while (*current_char <= '0' + 9 - n)
	{
		++*current_char;
		iter_function(str_begin, current_char + 1, n - 1, *current_char + 1);
	}
}

void	print_str_number(char *str)
{
	static char	str_buff[10];
	static char	has_out = 0;
	char		*p;

	if (has_out)
	{
		p = str_buff;
		while (*p)
		{
			ft_putchar(*p);
			++p;
		}
		if (!str)
		{
			has_out = 0;
			return ;
		}
		write(1, ", ", sizeof(char) * 2);
	}
	if (str)
	{
		has_out = 1;
		str_copy(str_buff, str);
	}
}

void	str_copy(char *destiny, char *source)
{
	char	*p;

	p = source;
	while (*p)
	{
		*destiny = *p;
		++destiny;
		++p;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, sizeof(char));
}

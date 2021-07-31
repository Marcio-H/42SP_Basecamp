#include <unistd.h>

void	ft_putchar(char c);
void	print_decimal_to_hex(unsigned int number);
void	print_hex_char(unsigned int number);

void	ft_putstr_non_printable(char *str)
{
	char	*p;

	p = str;
	while (*p)
	{
		if (*p < 32 || *p == 127)
		{
			ft_putchar('\\');
			if ((unsigned int)(unsigned char) *p < 16)
				ft_putchar('0');
			print_decimal_to_hex((unsigned int)(unsigned char) *p);
		}
		else
			ft_putchar(*p);
		++p;
	}
}

void	print_decimal_to_hex(unsigned int number)
{
	if (number > 15)
		print_decimal_to_hex(number / 16);
	print_hex_char(number % 16);
}

void	print_hex_char(unsigned int number)
{
	if (number >= 0 && number <= 9)
		ft_putchar('0' + number);
	else
		ft_putchar(number - 10 + 'a');
}

void	ft_putchar(char c)
{
	write(1, &c, sizeof(char));
}

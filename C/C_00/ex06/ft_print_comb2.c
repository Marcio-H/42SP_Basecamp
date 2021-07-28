#include <unistd.h>

void	print_numbers(int *first_number, int *second_number);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	while (first_number <= 98)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			print_numbers(&first_number, &second_number);
			++second_number;
		}
		++first_number;
	}
	print_numbers(0, 0);
}

void	print_numbers(int *first_number, int *second_number)
{
	static int	frts_num_buffer;
	static int	scd_num_buffer;
	static int	has_out = 0;

	if (has_out)
	{
		ft_putchar(frts_num_buffer / 10 + '0');
		ft_putchar(frts_num_buffer % 10 + '0');
		ft_putchar(' ');
		ft_putchar(scd_num_buffer / 10 + '0');
		ft_putchar(scd_num_buffer % 10 + '0');
		if (!first_number || !second_number)
		{
			has_out = 0;
			return ;
		}
		write(1, ", ", sizeof(char) * 2);
	}
	if (first_number && second_number)
	{
		has_out = 1;
		frts_num_buffer = *first_number;
		scd_num_buffer = *second_number;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

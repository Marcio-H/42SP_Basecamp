#include <unistd.h>

void	recursive_putnbr(long int nb);

void	ft_putnbr(int nb)
{
	long int	number;

	number = nb;
	if (number < 0)
	{
		write(1, "-", sizeof(char));
		number = number * -1;
	}
	recursive_putnbr(number);
}

void	recursive_putnbr(long int nb)
{
	char	nb_char;

	if (nb > 9)
	{
		recursive_putnbr(nb / 10);
	}
	nb_char = nb % 10 + '0';
	write(1, &nb_char, sizeof(char));
}

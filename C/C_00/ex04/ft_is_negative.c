#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", sizeof(char));
	}
	else
	{
		write(1, "N", sizeof(char));
	}
}

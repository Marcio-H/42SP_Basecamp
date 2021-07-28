#include <unistd.h>

void	print_number(char *h, char *t, char *u);

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	unit;

	hundred = '0';
	while (hundred <= '7')
	{
		ten = hundred + 1;
		while (ten <= '8')
		{
			unit = ten + 1;
			while (unit <= '9')
			{
				print_number(&hundred, &ten, &unit);
				++unit;
			}
			++ten;
		}
		++hundred;
	}
	print_number(0, 0, 0);
}

void	print_number(char *h, char *t, char *u)
{
	static char	h_buff;
	static char	t_buff;
	static char	u_buff;
	static char	has_out = 0;

	if (has_out)
	{
		write(1, &h_buff, sizeof(char));
		write(1, &t_buff, sizeof(char));
		write(1, &u_buff, sizeof(char));
		if (!h || !t || !u)
		{
			has_out = 0;
			return ;
		}
		write(1, ", ", sizeof(char) * 2);
	}
	if (h && t && u)
	{
		has_out = 1;
		h_buff = *h;
		t_buff = *t;
		u_buff = *u;
	}
}

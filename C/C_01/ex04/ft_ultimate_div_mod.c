void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_buff;
	int	b_buff;

	a_buff = *a;
	b_buff = *b;
	*a = a_buff / b_buff;
	*b = a_buff % b_buff;
}

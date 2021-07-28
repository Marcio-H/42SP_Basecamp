void	ft_rev_int_tab(int *tab, int size)
{
	int	*start_tab;
	int	*end_tab;
	int	buff;

	if (!size)
		return ;
	start_tab = tab;
	end_tab = tab + size - 1;
	while (start_tab < end_tab)
	{
		buff = *start_tab;
		*start_tab = *end_tab;
		*end_tab = buff;
		++start_tab;
		--end_tab;
	}
}

void	quick_sort(int *tab, int start, int end);
void	ft_swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	quick_sort(tab, 0, size);
}

void	quick_sort(int *tab, int start, int end)
{
	int	i;
	int	j;
	int	pivo;

	i = start;
	j = end - 1;
	pivo = tab[(start + end) / 2];
	while (i <= j)
	{
		while (tab[i] < pivo && i < end)
			++i;
		while (tab[j] > pivo && j > start)
			--j;
		if (i <= j)
		{
			ft_swap(tab + i, tab + j);
			++i;
			--j;
		}
		if (j > start)
			quick_sort(tab, start, j + 1);
		if (i < end)
			quick_sort(tab, i, end);
	}
}

void	ft_swap(int *a, int *b)
{
	int	buff;

	buff = *a;
	*a = *b;
	*b = buff;
}

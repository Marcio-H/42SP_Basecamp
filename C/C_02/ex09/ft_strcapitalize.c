void	ft_charcapitalize(char *c);

char	*ft_strcapitalize(char *str)
{
	char	*p;

	p = str;
	while (*p)
	{
		ft_charcapitalize(p);
		++p;
	}
	ft_charcapitalize(p);
	return (str);
}

void	ft_charcapitalize(char *c)
{
	static int	startWord = 0;

	if (*c >= '0' && *c <= '9')
		startWord = 1;
	else if (*c >= 'A' && *c <= 'Z')
	{
		if (startWord)
			*c = *c + ('a' - 'A');
		startWord = 1;
	}
	else if (*c >= 'a' && *c <= 'z')
	{
		if (!startWord)
			*c = *c - ('a' - 'A');
		startWord = 1;
	}
	else
		startWord = 0;
}

char	*ft_strlowcase(char *str)
{
	char	*p;

	p = str;
	while (*p)
	{
		if (*p >= 'A' && *p <= 'Z')
			*p = *p + ('a' - 'A');
		++p;
	}
	return (str);
}

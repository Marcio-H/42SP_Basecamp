char	*ft_strstr(char *str, char *to_find)
{
	char	*pstr;
	char	*pfind;
	char	*ppstr;

	if (!*to_find)
		return (str);
	pstr = str;
	while (*pstr)
	{
		pfind = to_find;
		ppstr = pstr;
		while (*ppstr == *pfind)
		{
			++ppstr;
			++pfind;
		}
		if (!*pfind)
			return (pstr);
		++pstr;
	}
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	char	*p;

	p = dest;
	while (*p)
		++p;
	while (*src)
	{
		*p = *src;
		++p;
		++src;
	}
	*p = '\0';
	return (dest);
}

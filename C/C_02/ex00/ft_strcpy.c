char	*ft_strcpy(char *dest, char *src)
{
	char	*p;

	p = dest;
	while (*src)
	{
		*p = *src;
		++src;
		++p;
	}
	return (dest);
}

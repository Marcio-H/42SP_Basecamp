char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*pdest;
	unsigned int	i;

	pdest = dest;
	i = 0;
	while (*pdest)
		++pdest;
	while (i < nb && src[i])
	{
		*pdest = src[i];
		++pdest;
		++i;
	}
	*pdest = '\0';
	return (dest);
}

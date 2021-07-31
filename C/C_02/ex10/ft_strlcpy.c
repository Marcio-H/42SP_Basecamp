unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	copy_size;

	src_size = 0;
	while (src[src_size])
		++src_size;
	copy_size = 0;
	while ((copy_size < (size - 1)) && src[copy_size])
	{
		dest[copy_size] = src[copy_size];
		++copy_size;
	}
	dest[copy_size] = '\0';
	return (src_size);
}

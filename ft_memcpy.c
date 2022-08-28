void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*src1;
	char		*dest1;

	src_src = (const char *)src;
	dest_dest (char *)dest;
	i = 0;
	if (!src1 && !dest1)
		return (NULL);
	if (src == dest)
		return (dest);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}

void	ft_putstr(char const *s);
char	*ft_strchr(char const *s, int c);

int		main()
{
	char	*str;
	char	*ret;

	str = "hellott";
	ret = ft_strchr(str, 't');
	ft_putstr(ret);
	return (0);
}

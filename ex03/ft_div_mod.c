void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	*div;
	int	*mod;

	a = 5;
	b = 3;
	c = 0;
	d = 0;
	div = &c;
	mod = &d;

	*div = a / b;
	*mod = a % b;
}

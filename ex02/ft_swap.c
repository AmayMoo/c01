void	ft_swap(int *a, int *b)
{
	int	swap;
	int	a;
	int	b;
	int	*ptra;
	int	*ptrb;

	a = 1;
	b = 2;

	ptra = &a;
	ptrb = &b;

	swap = *a;
	*a = *b;
	*b = swap;
}

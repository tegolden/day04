
int		ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if(nb == 1)
	{
		return 0;
	}
	while(nb > 1)
	{
		fact = fact*nb;
		nb--;
	}
	return fact;
}

#include <unistd.h>
#include <stdio.h>


int		ft_recursive_factorial(int nb)
{
	if(nb == 1)
	{
		return 0;
	}
	else
	{
		return nb*ft_recursive_factorial(nb-1);
	}

}

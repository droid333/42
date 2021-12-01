#include <stdio.h>

void	ft_ft(int *nbr);

int	main()
{
	int num = 5;
	int *ptr = &num;

	ft_ft(ptr);
	printf("%d", num);
	return 0;
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

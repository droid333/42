#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int main()
{
	char separateur[] = "P";

	char **tab = (char **) malloc(sizeof(char *) * 5);
	for (int i = 0; i < 5; i++)
	{
		tab[i] = (char *) malloc(sizeof(char) * 10);
		tab[i] = "";
	}
	printf("%s\n", ft_strjoin(5, tab, separateur));

	return 0;
}


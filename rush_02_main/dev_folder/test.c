#include <stdio.h>
#include <unistd.h>

int main (void)
{
	char	*str;
	char	result[3];
	char	*strnb;
	char	*strnum;
	char	*strletter;
	int		i;
	int		j;

	str = "816";

	strnb = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	strnum = {zero, one, two, three, four, five, six, seven, eight, nine};
	strletter = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
	}
	while (i > 0)
	{
		if (str[i - 1] == '1')
		{
			while (str[i] != strnb[j])
				j++;
			result[i] = strletter[j];
		}
		else
		{
			result[i] = strnum[j];
			result[i - 1 ] = 
		}
		i -= 2;
			printf("%s", result[i]);
	}
	return 0;
}

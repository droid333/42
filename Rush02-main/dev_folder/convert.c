#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct nb
{
	char *key;
	char *data;
} nb;

int		ft_strlen(char *str);
char	*ft_nums_to_words(char *str, nb *dict);
void	ft_make_struct(nb *dict, char digit[41][50], char letter[41][50]);

int	main(void)
{
	char str[] = "8";
	
	// 5: nbre darguments, 50: taille max de chacun (arbitraire)
	char digit[41][50] = {
		{"1"},
		{"2"},
		{"3"},
		{"4"},
		{"5"},
		{"6"},
		{"7"},
		{"8"},
		{"9"},
		{"10"},
		{"11"},
		{"12"},
		{"13"},
		{"14"},
		{"15"},
		{"16"},
		{"17"},
		{"18"},
		{"19"},
		{"20"},
		{"30"},
		{"40"},
		{"50"},
		{"60"},
		{"70"},
		{"80"},
		{"90"},
		{"100"},
		{"1000"},
		{"1000000"},
		{"1000000000"},
		{"1000000000000"},
		{"1000000000000000"},
		{"1000000000000000000"},
		{"1000000000000000000000"},
		{"1000000000000000000000000"},
		{"1000000000000000000000000000"},
		{"1000000000000000000000000000000"},
		{"1000000000000000000000000000000000"},
		{"1000000000000000000000000000000000000"}
	};

	char letter[41][50] = {
		{"one"},
		{"two"},
		{"three"},
		{"four"},
		{"five"},
		{"six"},
		{"seven"},
		{"eight"},
		{"nine"},
		{"ten"},
		{"eleven"},
		{"twelve"},
		{"thirteen"},
		{"fourteen"},
		{"fifteen"},
		{"sixteen"},
		{"seventeen"},
		{"eighteen"},
		{"nineteen"},
		{"twenty"},
		{"thirty"},
		{"forty"},
		{"fifty"},
		{"sixty"},
		{"seventy"},
		{"eighty"},
		{"ninety"},
		{"hundred"},
		{"thousand"},
		{"million"},
		{"billion"},
		{"trillion"},
		{"quadrillion"},
		{"quintillion"},
		{"sextillion"},
		{"septillion"},
		{"octillion"},
		{"nonillion"},
		{"decillion"},
		{"undecillion"}
	};

	nb *dict = NULL;

	ft_make_struct(dict, digit, letter);
	ft_nums_to_words(str, dict);
	return (0);
}

void	ft_make_struct(nb *dict, char digit[41][50], char letter[41][50])
{
	int	i;
	int count;

	i = 0;
	count = 41;
	dict = malloc(sizeof(nb) * count); // 10 termes a chaque fois
	while (i < count)
	{
		dict[i].key = digit[i];
		dict[i].data = letter[i];
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_nums_to_words(char *str, nb *dict)
{
	char	*result;

	int		i;
//	int		j;

	result = NULL;

	i = 0;
//	j = 0;
	
	//printf("%s", dict[0].key);
	if (ft_strlen(str) == 1)
	{
		//printf("digit: %d",ft_strlen(str));
	//	while (str[i] == dict[i].key[i])
	//	result = dict[i].datai[];
	}
	if (!(str[i - 1]) && str[i] == dict[i].key[i])
	{
	//	printf("%c\n", dict[i].key[i]);
		//result = dict[i].data;
		//printf("%s\n", dict[i].data);
	}
//	printf("%c\n", str[i]);

/*
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
*/
	return (str);
}

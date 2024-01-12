#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[1]);
		printf("%s\n", reverse(argv[1]));
	}

	int i = 0;
	char str[] = "test";
	while (str[i])
	{
		if(ft_isalpha(str[i]))
			printf("character %c is alphabet\n", str[i]);
		else
			printf("character %c in not alphabet\n",str[i]);
		i++;
	}

	int j = 0;
	char s[] = "isd1gitest";
	while (s[j])
	{
		if (ft_isdigit(s[j]))
			printf("from isdigit: char  %c isdigit\n", s[j]);
		else
			printf("from isdigit: char %c is not digit\n", s[j]);
		j++;
	}
	
	int k = 0;
	char t[] = "a1num /?$%@$@$";
	while (t[k])
	{
		if (ft_isalnum(t[k]))
			printf("from alnum:char  %c is alnum\n", t[k]);
		else
			printf("from alnum: char  %c is not alnum\n", t[k]);
		k++;
	}
	return 0;
}

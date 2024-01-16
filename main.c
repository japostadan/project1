#include "libft.h"
#include <stdio.h>
#include <stddef.h>

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
	 /*memset test*/
//	int		printf(const char*, ...);
		char	buf[0xff];
		ft_memset(buf,0,0xff);
		ft_memset(buf,'A', 20);
		ft_memset(buf + 20, 'B', 20);
		printf("%s\n",buf);

		printf("from toupper: %d\n",ft_toupper('s'));
		printf("from tolower: %d\n",ft_tolower('A'));

	return 0;
}

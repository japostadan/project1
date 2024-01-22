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

	// memset test
//int		printf(const char*, ...);
		char	buf[0xff];
		ft_memset(buf,0,0xff);
		ft_memset(buf,'A', 20);
		ft_memset(buf + 20, 'B', 20);
		printf("%s\n",buf);

		printf("from toupper: %d\n",ft_toupper('s'));
		printf("from tolower: %d\n",ft_tolower('A'));
		char l[] = "https://www.tutorialspoint.com";
		const char ch = 'c';
		char *ret;
		ret = strchr(l, ch);

		char *p;
		p = l;



   //printf("String after |%c| is - |%s|\n", ch, ret);
   printf("%s\n",ft_strchr(p,ch));

  
    const char haystack[20] = "this is to test";
    const char needle[10] = "to";
    char *result;

    result = ft_strnstr(haystack, needle, 4);
    printf("The substring is: %s\n", result);
	const char *str1 = "12345";
    int result1 = atoi(str1);
    printf("Test Case 1: String: \"%s\", Result: %d\n", str1, result1);

    // Test case 2: Negative integer
    const char *str2 = "-6789";
    int result2 = atoi(str2);
    printf("Test Case 2: String: \"%s\", Result: %d\n", str2, result2);

    // Test case 3: String with leading spaces
    const char *str3 = "   987";
    int result3 = atoi(str3);
    printf("Test Case 3: String: \"%s\", Result: %d\n", str3, result3);

    // Test case 4: String with non-numeric characters
    const char *str4 = "    ---+1234ab567";
    int result4 = atoi(str4);
    printf("Test Case 4: String: \"%s\", Result: %d\n", str4, result4);
    
	int result5 = ft_atoi(str1);
    printf("Test Case 1 from fake: String: \"%s\", Result: %d\n", str1, result5);

    // Test case 2: Negative integer
    int result6 = ft_atoi(str2);
    printf("Test Case 2 from fake: String: \"%s\", Result: %d\n", str2, result6);

    // Test case 3: String with leading spaces
    int result7 = ft_atoi(str3);
    printf("Test Case 3 from fake: String: \"%s\", Result: %d\n", str3, result7);

    // Test case 4: String with non-numeric characters
    int result8 = ft_atoi(str4);
    printf("Test Case 4 from fake: String: \"%s\", Result: %d\n", str4, result8);

	char iftatoi[] = "    ---+1234ab567";
	int fnatoi;

	fnatoi = ft_atoi(iftatoi);
	printf("%d",fnatoi);
	return 0;
}

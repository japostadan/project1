#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
	size_t i = 0;
	if(!s)
		return 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return i;
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i = 0;
	int j = 0;
	int counter = 0;
	if(!*dst && !*src)
		return 0;
	while (*dst != '\0')
	{
		dst++;
		i++;
		counter++;	
	}

	while (*src != '\0')
		{
			dst[i] = src[j];
			j++;
			counter++;
		}
	return counter;
}


int main(int argc, char **argv)
{
	char str[] = "first second";
	char s[] = "third";
	printf("%s\n" ,str);

	memcpy(str,&(str[2]),sizeof(char)*2);
	printf("%s\n",str);

	memmove(str,&(str[2]),sizeof(char)*2);
	printf("%s\n",str);
	
	printf("%lu\n",ft_strlen(str));

	printf("%lu\n",strlcat(str,s,sizeof(char)*13)); 


	printf("%s\n",str);
	return 0;

}	

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

size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int dst_len;
	int src_len;
	int offset;
	dst_len  = ft_strlen(dst);
	src_len = ft_strlen(src);

	int i = 0;
	offset  = dst_len;
	while(*(src + i) != '\0')
	{
		*(dst + offset) = *(src + i);
		i++;
		offset++;
		if(offset == dstsize -1)
			break;
	}

	*(dst + offset ) = '\0';

	return (dst_len + src_len);
}

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{

	size_t i;
	size_t src_len;

	src_len = ft_strlen(src);
	if (!dst || !src)
		return 0;

	i = 0;
	if (dstsize != 0)
	{
		while(src[i] != '\0' && i < (dstsize-1))
		{
			dst[i] = src[i];
			i++;
		}

	dst[i] = '\0';
	}
	return (src_len);

}

int main(int ergc, char **argv)
{
	char str[] = "123";
	char s[] = "456";
	printf("%s\n" ,str);

	printf("%s\n" ,s);
	/*
	memcpy(str,&(str[2]),sizeof(char)*2);
	printf("%s\n",str);

	memmove(str,&(str[2]),sizeof(char)*2);
	printf("%s\n",str);
	
	*/


	printf("from real : %lu\n",strlcat(str,s,sizeof(char)*4)); 

	
//	printf("from strlcpy :%lu\n",strlcpy(str,s,sizeof(char)*13)); 
//	printf("from ft_strlcpy :%zu\n",ft_strlcpy(str,s,sizeof(char)*13)); 
	
	printf("%s\n" ,str);

	printf("%s\n" ,s);

	return 0;

}	

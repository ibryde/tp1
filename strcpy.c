#include <string.h>
#include <stdio.h>
char *my_strcpy(char *dst, const char *src)
{
	for (int i = 0; src[i] != '\0';i++)
		dst[i] = src[i];
	return dst;
}

int main(void)
{
	char dst[100] = { 'a', 'b', 'c', 'd', 'e', '2', '3' };

	printf("%s\n", my_strcpy(dst
                ,"12345"));
}

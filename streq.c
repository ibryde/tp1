// #include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int streq(const char *s1, const char *s2)
{
	if (s1 == s2)
		return 1;
	return 0;
}

int main(void)
{
    char text1[] = {'H', 'e', 'l', 'l', 'o', '!', 0};
    char* text2 = "Hello!";

	printf("%d\n", streq(text1,text2));
}

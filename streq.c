#include <stddef.h>
#include <stdio.h>
int streq(const char *s1, const char *s2)
{
	if (s1 == s2)
		return 1;
	return 0;
}

int main(void)
{
	printf("%d\n", streq("v","v"));
}

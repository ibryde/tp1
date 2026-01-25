#include <stddef.h>
#include <stdio.h>
#include <string.h>
int my_streq(const char *s1, const char *s2)
{
	for (int i = 0; *s1 != '\0' || *s2 != '\0'; i++)
	{
		if (*s1 != *s2)
			return 0;
		s1++;
		s2++;
	}
	return 1;
}



int my_strlen(const char *var)
{
	int l = 0;
	while (*var != '\0')
	{
		l+=1;
		var++;
	}
	return l;
}

int main(void)
{
	printf("%d\n", my_streq("vvv", "vv"));
	return 0;

}

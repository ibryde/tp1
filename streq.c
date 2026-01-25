// #include <stddef.h>
#include <stdio.h>
<<<<<<< HEAD
#include <string.h>
int my_streq(const char *s1, const char *s2)
=======
#include <stdbool.h>
#include <string.h>

int streq(const char *s1, const char *s2)
>>>>>>> f7d092256cf0e8a9be2f0541084c15220210f3f4
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
<<<<<<< HEAD
	printf("%d\n", my_streq("vvv", "vv"));
	return 0;

=======
    char text1[] = {'H', 'e', 'l', 'l', 'o', '!', 0};
    char* text2 = "Hello!";

	printf("%d\n", streq(text1,text2));
>>>>>>> f7d092256cf0e8a9be2f0541084c15220210f3f4
}

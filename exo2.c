#include <stdio.h>

/**
 * This function should swap the value of a and b.
 * @param a random integer pointer
 * @param b another random integer pointer
 */
void swap(int* a, int* b)
{
	int var = *b;
	*b = *a;
	*a = var;
    // FIXME: Some code was deleted here...
}

int main(void)
{
    int a = 4;
    int b = -2;
    int old_a = a;
    int old_b = b;
swap(&a,&b);
    printf("%d changed to %d ; and %d changed to %d\n", old_a, a, old_b, b);

    return 0;
}

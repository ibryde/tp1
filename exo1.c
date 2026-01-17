#include <stdio.h>

// FIXME: Some code was deleted here...

void change(int *x, int y)
{
	*x = y;

}



int main(void)
{
    int a = 5;
    int old_a = a;
    change(&a, 2);
    // FIXME: Make a function call with a and square it's value.
    
    printf("%d changed to %d\n", old_a, a);
}

#include <stdio.h>

/**
 * This function should return the maximum of an array.
 * @param array an integer array 
 * @param length the length of the array
 * @return the maximum of the array
 */
int max_array(int *array, size_t length)
{
    // FIXME: Some code was deleted here...

    return -1;
}

int main(void)
{
    int array[] = {16, -12, 37, 17, -45, -10, 0, 32};
    int length = sizeof(array) / sizeof(int);

    printf("The max of the array is : %d\n", max_array(array, length));

    return 0;
}

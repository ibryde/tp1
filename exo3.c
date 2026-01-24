#include <stdio.h>

/**
 * This function should return the maximum of an array.
 * @param array an integer array 
 * @param length the length of the array
 * @return the maximum of the array
 */
int max_array(int *array, size_t length)
{
	int maxi = *(array+0);
	for (size_t i = 1; i<length ; i++)
	{
		if (*(array+i)>maxi)
			maxi = *(array+i);
	}
	return maxi;
}

int main(void)
{
    int array[] = {-16, -12, -37, -17, -45, -10, -2, -32};
    int length = sizeof(array) / sizeof(int);

    printf("The max of the array is : %d\n", max_array(array, length));

    return 0;
}

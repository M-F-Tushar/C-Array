//Write a program that declares an array of 10 integers, assigns random values from 0 to 20 to its elements, and displays their average.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
int main()
{
int i, sum, arr[SIZE];
sum = 0; /* Initialise with 0 the variable that calculates the sum
of the array elements. */
srand(time(NULL));
for(i = 0; i < SIZE; i++)
{
arr[i] = rand() % 21; /* The rand() function returns a random
positive integer and the % operator constrains it in [0,20]. */
sum += arr[i];
}
printf("Avg = %f\n", (float)sum/SIZE);
return 0;
}

/*Write a program that creates an identity 6×6 array and displays its elements as an
identity 6×6 matrix in algebra form. (Note: In math, an identity matrix has 1’s on the
main diagonal’s elements and 0’s everywhere else.)*/
#include <stdio.h>
#define SIZE 6
int main()
{
    int i, j, arr[SIZE][SIZE] = {0}; /* Initialize the arr elements
with 0. */
    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
        {
            if(i == j) /* Check if it is an element of the main diagonal.
*/
                arr[i][j] = 1;
            printf("%3d", arr[i][j]);
        }
        printf("\n"); /* Add it to separate the array rows. */
    }
    return 0;
}

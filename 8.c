/*Write a program that reads 10 integers and stores them in an array. Then, the pro￾
gram should check if the array is symmetric, that is, if the value of the frst element
is equal to the last one, the value of the second one equal to the value of the last but
one, and so on.*/
#include <stdio.h>
#define SIZE 10
int main()
{
    int i, a[SIZE];
    for(i = 0; i < SIZE ; i++)
    {
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for(i = 0; i < SIZE/2 ; i++)
       if(a[i] != a[SIZE-1-i])
        {
            printf("Non symmetric array\n");
            return 0; /* Since we found out that the array isn’t symmetric
the program terminates. */
        }
    printf("Symmetric array\n");
    return 0;
}

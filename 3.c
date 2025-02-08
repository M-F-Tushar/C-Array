/*Write a program that declares an array of 5 integers and assigns the values 10, 20,
30, 40, and 50 to its elements. Next, the program should display the elements greater
than 20.*/
#include <stdio.h>
int main()
{
    int i, arr[] = {10, 20, 30, 40, 50};
    for(i = 0; i < 5; i++)
    {
        /* The braces are not necessary. */
        if(arr[i] > 20)
            printf("%d\n", arr[i]);
    }
    return 0;
}

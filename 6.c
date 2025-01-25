/*Write a program that declares an array of 5 elements and uses a loop to assign the
values 1.1, 1.2, 1.3, 1.4, and 1.5 to them. Next, the program should display the
array’s elements in reverse order.*/
#include <stdio.h>
int main()
{
    int i;
    double arr[5];
    for(i = 0; i < 5; i++)
        arr[i] = 1.1 + (i*0.1);
    for(i = 4; i >=0; i--)
        printf("%f\n", arr[i]);
    return 0;
}

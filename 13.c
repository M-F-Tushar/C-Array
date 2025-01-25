/*The following program reads 10 integers and stores in the array freq the number of
occurrences of each input number. Is there a bug in this code*/
#include <stdio.h>
#define SIZE 10
int main()
{
    int i, num, arr[SIZE], freq[SIZE];
    for(i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < SIZE; i++)
    {
        num = arr[i];
        freq[num]++;
    }
    printf("\nNumber occurrences\n");
    for(i = 0; i < SIZE; i++)
        printf("Num %d appears %d times\n", arr[i], freq[i]);
    return 0;
}
/* The frst bug is due to the fact that the elements of the array freq have not
been initialized to 0. Therefore, the statement freq[num]++ is meaningless because
it increases the random value of freq[num] by one.
However, the most serious bug happens when the user enters a number out of the
bounds of the array freq. For example, if the number 100 is stored in the array arr,
then the value of num would become 100 and the statement freq[100]++ would
change the content of a memory location out of the array bounds.

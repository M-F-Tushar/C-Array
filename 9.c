//What is the output of the following program?
#include <stdio.h>
int main()
{
    int i, arr[] = {30, 20, 10, 0, −10, −20, −30};
    for(i = 0; arr[i]; i++)
        printf("%d\n", arr[i]);
    return 0;
}
/*The arr[i] expression in the for statement is equivalent to arr[i] != 0.
Since the value of the fourth element is 0, the loop displays the values of the frst
three elements, that is, 30, 20, and 10, then it terminates.*/

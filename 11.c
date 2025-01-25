//What would be the values of the array arr in the following program?
#include <stdio.h>
int main()
{
    int i, arr[3] = {0, 1, 2};
    for(i = 1; i < 4; i++)
        arr[arr[arr[3-i]]] = i-1;
    return 0;
}

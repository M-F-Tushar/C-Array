//the following program declares a two-dimensional array and assigns the value 1 to its elements
#include <stdio.h>
int main()
{
    int i, j, arr[50][100];
    for(i = 0; i < 50; i++)
        for(j = 0; j < 100; j++)
            arr[i][j] = 1;
    return 0;
}

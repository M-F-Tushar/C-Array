#include <stdio.h>
int main()
{
    int i, j = 20, arr[3];
    for(i = 0; i < 4; i++)
        arr[i] = 100;
    printf("%d\n", j);
    return 0;
}
/*In the last iteration (i = 3), the statement arr[3] = 100; assigns a value to a nonexisting
array element. In fact, the value 100 will overwrite the data in the memory following the
arr[2] element. If this memory is reserved for j, its value will change and the program
will display 100 instead of 20 !!!

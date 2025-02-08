//What would be the values of the array arr in the following program?
#include <stdio.h>
int main()
{
    int i, arr[10] = {0};
    for(i = 0; i < 10; i++)
        arr[i++] = 20;
    return 0;
}
/*The elements of the array arr are initialized to 0. The statement arr[i++] =
20 frst makes arr[i] equal to 20, then increases i by one. Then, the for statement
increases i once more.
Therefore, the even elements of the array arr[0], arr[2], … become 20, whereas
the odd ones arr[1], arr[3], … remain 0.

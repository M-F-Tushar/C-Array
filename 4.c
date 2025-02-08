//What would be the values of the array a in the following program?
#include <stdio.h>
int main()
{
    int i, a[3] = {4, 2, 0}, b[3] = {2, 3, 4};
    for(i = 0; i < 3; i++)
        a[b[i]−a[2−i]]++;
    return 0;
}
/* The statement int a[] = {4, 2, 0}; makes a[0] = 4, a[1] = 2, and
a[2] = 0. Similarly, with the declaration of array b, we have b[0] = 2, b[1] = 3,
and b[2] = 4. Let’s trace the iterations:
First iteration (i = 0): a[b[0]−a[2]]++ = a[2−0]++ = a[2]++ = 1.
Second iteration (i = 1): a[b[1]−a[1]]++ = a[3−2]++ = a[1]++ = 3.
Third iteration (i = 2): a[b[2]−a[0]]++ = a[4−4]++ = a[0]++ = 5.
Therefore, the values of a[0], a[1], and a[2] become 5, 3, and 1, respectively.

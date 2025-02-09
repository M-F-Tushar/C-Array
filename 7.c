//What is the output of the following program?
#include <stdio.h>
int main()
{
unsigned char arr[5];
int i;
for(i = 0; i < 5; i++)
{
arr[i] = 256+i;
printf("%d", arr[i]);
}
return 0;
}

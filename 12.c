/*Write a program that reads the grades of 100 students (should be in [0−10]), stores
them in an array, and displays the average, the maximum, and the minimum grade,
as well as the serial numbers of the students who got them. (Note: If there are more
than one student with the same maximum or minimum grade, the program should
display the frst found.)*/
#include <stdio.h>
#define SIZE 100
int main()
{
    int i, min_pos, max_pos;
    float sum, min_grd, max_grd, grd[SIZE];
    sum = max_grd = 0; /* Initialize max_grd with the minimum allowed
value. */
    min_grd = 10; /* Initialization with the maximum allowed value. */
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter grade of stud_%d in [0-10]: ", i+1);
        scanf("%f", &grd[i]);
        while(grd[i] < 0 || grd[i] > 10)
        {
            printf("Error - Enter new grade in [0-10]: ");
            scanf("%f", &grd[i]);
        }
        sum += grd[i];
        if(grd[i] > max_grd)
        {
            max_grd = grd[i];
            max_pos = i; /* Store the position of the student with the best
grade. */
        }
        if(grd[i] < min_grd)
        {
            min_grd = grd[i];
            min_pos = i; /* Store the position of the student with the
worst grade. */
        }



{
 /* Since the first element of an array is always stored in
        position [0] we add one to the max_pos and min_pos variables to
        display the serial numbers. */
        printf("Avg: %.2f H(%d): %.2f L(%d): %.2f\n", sum/SIZE, max_pos+1,
               max_grd, min_pos+1, min_grd);
        return 0;


}


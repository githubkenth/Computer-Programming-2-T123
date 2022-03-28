/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int avg (int a, int b, int c, int d, int e);

int main()

{
    int n1,n2,n3,n4,n5, sum;
    printf("Enter Five Numbers: \n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    avg(n1,n2,n3,n4,n5);

    return 0;
}
    int avg (int a, int b, int c, int d, int e)
    {
        int average;
        average = (a+b+c+d+e)/5;
        printf("Average = %d", average);
        return average;
    }
    

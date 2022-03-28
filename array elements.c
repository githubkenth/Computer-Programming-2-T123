/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
int marks[10],i , n = 10, sum = 0;

printf("Enter the size of the array: ");
scanf("%d", &n);

for(i=0; i<n; i++)
{
printf("Enter number%d: ",i+1);
scanf("%d", &marks[i]);

sum += marks[i];
}

printf("Sum of all array elements = %d", sum);
return 0;
}

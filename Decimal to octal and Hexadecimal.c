/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, choice;
    printf ("Enter decimal number: ");
    scanf("%d", &n);
    printf("\n1. Convert %d to octal integer " ,n);
    printf("\n2. Convert %d to Hexadecimal integer " ,n);
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        
        case 1:
        printf("\n%d of decimal number system, in octal is %o",n,n);
        break;
        case 3:
        printf("\n%d of decimal number system, in hexadecimal is %X",n,n);
        break;
        
        default:
        printf("Wrong choice");
    }
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[20]="text.txt";
  char str1;
  
       
	printf(" Input how many lines to be appended : ");
	scanf("%d", &n);
	
	fptr = fopen (fname,"w"); 
	for(i = 0; i < n+1;i++)
		{
		fgets(str, sizeof str, stdin);
		fputs(str, fptr);
		}
  fclose (fptr);

	fptr = fopen (fname, "r");  
	
    return 0;
}

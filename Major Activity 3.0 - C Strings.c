/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int i, len;
    
    
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	printf("Reverse ordered word: \n"); 	   	
  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ')
		{
			str[i] = '\0';
			printf("%s ", &(str[i]) + 1);	
		} 
	}
	printf("%s", str);
	
  	return 0;
}
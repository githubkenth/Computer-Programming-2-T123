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
  	int i, j, len, startIndex, endIndex;
 
  	printf("\n Enter any String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	endIndex = len - 1;
  	
  	printf("\n Reverse ordered words: \n"); 	   	
  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				startIndex = 0;
			}
			else
			{
				startIndex = i + 1;
			}
			for(j = startIndex; j <= endIndex; j++)
			{
				printf("%c", str[j]);
			}
			endIndex = i - 1;
			printf(" ");				
		} 
	}
	
  	return 0;
}


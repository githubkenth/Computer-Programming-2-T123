/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int auth(int acc[3][2],int id, int pin){
    int flag = 0;
    for(int i = 0; i<3; i++){
        if(id == acc[i][0] && pin == acc[i][1]){
            flag = 1;
        }
    }
    return flag;
}
int main(){
    int acc[3][2] = {{2626,2002},{2626,2002},{2626,2002}};
    int id,pin;
    printf("Enter ID Number: ");
    scanf("%d",&id);
    printf("Enter PIN: ");
    scanf("%d",&pin);
    if(auth(acc,id,pin)){
        printf("You have successfully logged in\nID#:%d",id);
    } else {
        printf("Invalid ID/PIN!");
    }
    return 0;
}
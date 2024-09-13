#include <stdio.h>
int main(){
    int num,fact = 1;
    
    printf("Enter Num : ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        fact *= i; 
    }
    printf("The Factorial of the %d, is %d\n\n",num, fact);
}
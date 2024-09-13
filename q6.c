#include <stdio.h>
int main(){
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    if (num > 0 )
    {
        printf("Number is greater then 0 \n");
    }
    else if (num<0)
    {
        printf("Number is less then 0\n");
    }
    else if (num == 0)
    {
        printf("Number is 0\n");
    }
    else{
        printf("invalid Input\n");
    }    
}
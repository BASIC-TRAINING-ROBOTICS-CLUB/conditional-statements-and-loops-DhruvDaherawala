#include <stdio.h>
int main(){
    int num, sum =0, count=0,digit;
    printf("Enter Number : ");
    scanf("%d",&num);
    while (num!=0)
    {
        digit = num % 10;
        sum += digit;
        count++;
        num /= 10;
    }
    printf("Total Digits are : %d\n",count);
    printf("Sum is : %d\n\n",sum);
}
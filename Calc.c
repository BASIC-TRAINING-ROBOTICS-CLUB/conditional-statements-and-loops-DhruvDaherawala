#include <stdio.h>
int sum(int a, int b){
    int c =a + b;
    // printf("Sum is %d\n",c);
    return c;
}
int sub(int a, int b){
    int c =a - b;
    printf("Sub is %d\n",c);
}
int multiply(int a, int b){
    int c =a * b;
    printf("Multiplication is %d\n",c);
}
int division(int a, int b){
    int c =a / b;
    printf("Division is %d\n",c);
}

int main() {
    int a,b;
    printf("Enter Number one : ");
    scanf("%d",&a);
    printf("Enter Number two : ");
    scanf("%d",&b);
    printf("Sum is :%d\n",sum(a,b));
    sub(a,b);
    multiply(a,b);
    division(a,b);

    return 0;
}
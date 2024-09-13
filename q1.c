#include <stdio.h>
int main() {
    int a;
    printf("enter A : ");
    scanf("%d", &a);
    if((a % 2)==0){
            printf("Even");
    }
    else {
        printf("Odd\n");
    }
    return 0;
}
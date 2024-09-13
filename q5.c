#include <stdio.h>

int main() {
    int a1, a2, a3;
    printf("Enter value 1 : ");
    scanf("%d",&a1);
    printf("Enter value 2 : ");
    scanf("%d",&a2);
    printf("Enter value 3 : ");
    scanf("%d",&a3);
    if(a1 > a2 && a1 > a3){
        printf("%d is Max",a1);
    }
    else if(a2 > a1 && a2 > a3){
        printf("%d is Max",a2);
    }
    else if(a3 > a1 && a3 > a2){
        printf("%d is Max",a3);
    }
    else if(a1 == a2 || a2 == a3){
        printf("%d & %d are Same values.",a1,a2);
    }
    else{
        printf("All Values Are Same.");
    }
    return 0;
}
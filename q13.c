#include <stdio.h>
int main(){
    int num;
    printf("Enter Num :");
    scanf("%d",&num);
    
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0){
            printf("%d ",i);
        }
    }
    printf("\n\n");
    return 0;
}
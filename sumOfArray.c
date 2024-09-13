#include <stdio.h>
int main() {
    int n;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    int arr[n], sum;
    for(int i = 0; i < n ;i++){
        printf("Enter The Element no %d: ",i+1);
        scanf("%d",&arr[i]);
        
    }
    printf("\n\n");
    for(int i = 0; i < n ;i++){
        sum += arr[i];
        // printf("Element No %d is : %d",i,arr[i]);
        printf("\n");
    }
    printf("Sum is : %d ",sum);
    return 0;
}
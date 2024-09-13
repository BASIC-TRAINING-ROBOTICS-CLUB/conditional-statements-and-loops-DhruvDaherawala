#include <stdio.h>
int main() {
    int n;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    int arr[n],count1=0,count2=0;
    for(int i = 0; i < n ;i++){
        printf("Enter The Element no %d: ",i+1);
        scanf("%d",&arr[i]);
    }
        for(int i = 0; i < n ;i++){
            if(arr[i] % 2 == 0){
                printf("%d is Even\n",arr[i]);
                count1++;
            }
            else{
                printf("%d is Odd\n",arr[i]);
                count2++;
            }   
        }
    printf("Here Odd values are %d \n",count2);
    printf("Here Even values are %d \n",count1);
    return 0;
}
#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, next;
    printf("Enter the number of terms you want : ");
    scanf("%d", &n);
    printf("Fibonacci Series : ");
    for(int i = 1; i <= n; i++){
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("\n\n");
    return 0;
}
#include <stdio.h>
int main() {
    int side1, side2, side3;
    printf("Enter the lengths : ");
    scanf("%d %d %d", &side1, &side2, &side3);
    if (((side1* side1)+(side2* side2) == (side3* side3)) || ((side2* side2)+(side3* side3) == (side1* side1)) || ((side3* side3)+(side1* side1) == (side2* side2))){
        printf("The triangle has an Right A\n");
    } 
    else{
        printf("The triangle is not an Right angle Triangle.\n");
    }
    return 0;
}
#include <stdio.h>
int main() {
    int i;
    printf("Multiplication table of 3: \n");
    for(i=1; i <= 10; i++) {
    	printf("3 * %d = %d\n",i, 3*i);
    }
    return 0;
}

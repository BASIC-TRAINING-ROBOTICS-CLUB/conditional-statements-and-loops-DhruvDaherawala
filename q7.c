#include <stdio.h>
int main() {
	int year;
	printf("Enter Year : ");
	scanf("%d",&year);
	if(year>2000){
		if(year % 4 == 0 && year % 100 != 0 || year % 400 ==0){
		    printf("This Year is leap Year.\n");
	}
	else{
            printf("This Year is not leap Year.\n");
        }
    }
    else{
        printf("invalid Year\n");
    }
    return 0;
}
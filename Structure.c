#include <stdio.h>
struct ID{
    int En_No;
    float CPI;
    float SPI;
};

int main(){
    struct ID Dhruv;
    Dhruv.En_No = 2114;
    Dhruv.CPI = 9.9;
    Dhruv.SPI = 9.9;

    printf("For : Dhruv Daherawala\n\n");
    printf("Enrolment is %d\n",Dhruv.En_No);
    printf("CPI is %.1f\n",Dhruv.CPI);
    printf("SPI is %.1f\n",Dhruv.SPI);

    struct ID Lad;
    Lad.En_No = 2115;
    Lad.CPI = 9.9;
    Lad.SPI = 9.9;

    printf("For : Dhruv Lad\n\n");


    printf("Enrolment is %d\n",Lad.En_No);
    printf("CPI is %.1f\n",Lad.CPI);
    printf("SPI is %.1f\n",Lad.SPI);
}
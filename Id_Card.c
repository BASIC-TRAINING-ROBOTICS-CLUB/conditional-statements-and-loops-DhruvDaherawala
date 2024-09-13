#include <stdio.h>

struct id {
    long int en_no;
    char name[50];
    char phone_no[13];
    char email[50];
    char address[100];
};

int main() {
    struct id student;

    student.en_no = 211460;
    sprintf(student.name, "Dhruv Daherawala");
    sprintf(student.phone_no, "9104154755");
    sprintf(student.email, "dhruvkhatri460@gmail.com");
    sprintf(student.address, "C/301, Aakashbhumi Apt., Pandesara, Surat, 394221\n");

    printf("Student ID Card\n\n");

    printf("Student Name: %s \n", student.name);
    printf("Enrollment No.: %d \n", student.en_no);
    printf("Phone No.: %s \n", student.phone_no);
    printf("Email ID: %s \n", student.email);
    printf("Address: %s \n", student.address);

    return 0;
}
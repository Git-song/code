#include "stdio.h"


void practice1()
{
    printf("Gustav Mahler\n");
    printf("Gustav\n");
    printf("Mahler\n");
    printf("Gustav");
    printf(" Mahler\n");
}

void practice2()
{
    printf("My name is Hu Song.\n");
    printf("My adderss is ECJTU.\n");
}

void practice3()
{
    int age;

    printf("How old are you? :");
    scanf("%d",&age);
    printf("My age is %d,i have been here for %d days.",age,age*365);
}
int main (int argc,char argv[])
{
    practice1();
    practice2();
    practice3();

    getchar();
    getchar();
    return 0;

}
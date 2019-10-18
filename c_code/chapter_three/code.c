#include "stdio.h"

/***********第2题***********/
void practice2()
{
    int Ascii = 0;
    printf("please enter the Value of ASCII:");
    scanf("%d",&Ascii);
    printf("\nyour enter value is:%d",Ascii);
    printf("\nthe character:%c.\n",(char)Ascii);
    getchar();
}

/************第3题**************/
void practice3()
{
    printf("\a\nStartled by the sund, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"");
}

/***********第4题****************/
void practice4()
{
    float fl;
    printf("Enter a floating-point value: ");
    scanf("%f",&fl);
    printf("\nfixed-ponit notation: %f",fl);
    printf("\nexponential notation: %e",fl);
    printf("\np notation: %a",fl);
    getchar();
}

int main(void)
{
    practice2();
    practice3();
    practice4();
    
    getchar();
    return 0;
}
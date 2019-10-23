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

/************第5题*****************/
void practice5()
{
    float year_second = 3.156e7;
    int age = 0;
    printf("\nPlease enter you age:");
    scanf("%d",&age);
    printf("\nyour age is %e seconds.",age*year_second);
    getchar();
}

/************第6题***************/
void practice6()
{
    double water_wight = 3.0e-23;
    int kuake = 950;
    int kuake_water = 0;
    printf("\nPlease enter the wate kuake:");
    scanf("%d",&kuake_water);
    printf("the water can was:%le",(kuake_water*kuake/water_wight));
    getchar();
}

/****************第7题**************/
void practice7()
{
    float inch_to_cm = 2.54;
    float height_in_inch = 0.0;

    printf("\nPlease enter you height in inch:");
    scanf("%f",&height_in_inch);
    printf("you height in cm:%f cm",height_in_inch*inch_to_cm);
    getchar();
}

/****************第8题**************/
void practice8()
{
    float pints = 0.0;
    float ounces = 0.0;
    float big_spoons = 0.0;
    float tea_spoons = 0.0;

    printf("\nPlease enter you cups:");
    int cup = 0;
    scanf("%d",&cup);
    pints = cup/2;
    ounces = cup*8;
    big_spoons = cup*8*2;
    tea_spoons = cup*8*2*3;
    printf("\nPints= %f ,Cups= %d , Ounces= %f ,Big_spoons= %f ,Tea_spoons= %f ",
        pints ,cup,ounces ,big_spoons ,tea_spoons );
    getchar();
}

int main(void)
{
    practice2();
    practice3();
    practice4();
    practice5();
    practice6();
    practice7();
    practice8();

    getchar();
    return 0;
}
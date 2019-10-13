#include "stdio.h"

/***********第1题*****************/
void practice1()
{
    printf("Practide1\n");
    printf("Gustav Mahler\n");
    printf("Gustav\n");
    printf("Mahler\n");
    printf("Gustav");
    printf(" Mahler\n");
    getchar();
}
/***********第2题*****************/
void practice2()
{
    printf("Practide2\n");
    printf("My name is Hu Song.\n");
    printf("My adderss is ECJTU.\n");
    getchar();
}
/***********第3题*****************/
void practice3()
{
    int age;

    printf("Practide3\n");
    printf("How old are you? :");
    scanf("%d",&age);
    printf("My age is %d,i have been here for %d days.\n",age,age*365);
    getchar();
    getchar();
}
/***********第4题*****************/
void practice4()
{
    printf("Practide4\n");
    for (int i = 0; i < 3  ; i++)
    {
        printf("For he's a jolly good fellow!\n");
    }
    printf("Which nobody can deny!\n");
    getchar();
}
/***********第5题*****************/
void br()
{
    printf("Brazil,Russia");
}
void ic()
{
    printf("India,China\n");
}
void practice5()
{
    printf("Practice5\n");
    br();
    printf(",");
    ic();
    ic();
    br();
    printf("\n");
    getchar();
}
/***********第6题*****************/
void practice6()
{
    printf("Practice6\n");
    int tose = 10;
    printf("tose = %d\n",tose);
    printf("2*tose = %d\n",tose*2);
    printf("tose*tose = %d\n",tose*tose);
    getchar();
}

/***********第7题*****************/
void smile()
{
    printf("Smile!");
}
void practice7()
{
    printf("Practice7\n");
    smile();smile();smile();
    printf("\n");
    smile();smile();
    printf("\n");
    smile();
    printf("\n");
    getchar();
}
/***********第8题*****************/
void two()
{
    printf("two\n");
}
void one_three()
{
    printf("Practice8\n");
    printf("starting now\n");
    printf("one\n");
    two();
    printf("three\n");
    printf("done!\n");
}
void practice8()
{
    one_three();
}
int main (void)
{
    practice1();
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
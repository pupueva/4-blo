               //4 лаба
#define _CRT_SECURE_NO_DEPRECATE 

#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");

	char c = '!';

    int i = 2;

    float f = 3.14f;

    double d = 5e-12; 

    printf("вывести %c:\n",c);
    printf("вывести %d:\n", i);
    printf("вывести %f:\n", f);
    printf("вывести %e:\n", d);

    char pz;
    int iz;
    float fz;
    double dz;

    printf("ввести pz:");
    scanf_s("%c",&pz);
    printf("%c\n", pz);

    printf("ввести iz:");
    scanf_s("%d", &iz);
    printf("%d\n", iz);

    printf("ввести fz:");
    scanf_s("%f", &fz);
    printf("%f\n", fz);

    printf("ввести dz:");
    scanf_s("%le", &dz);
    printf("%le\n", dz);
    
    //1a
    int pupu2;
    pupu2 = (int)fz;

    printf("\n цела€ часть числа %d", pupu2);
    printf("\nдробна€ часть от числа %.2f", fz - pupu2);
    //1б
    printf("\n 10 тична€ %i", pupu2);
    printf("\n 16 рична€  %x", pupu2);
    //1в
    double pupu3;
    pupu3 = 1.0 / pupu2;

    printf("\n  дес€тичное число, соотвествующее 1/i  1/%d = %.2lf\n",pz,pupu3);

   // задание 2
    int a = 11;
    int b = 3;
   
    printf("\nцелочисленное деление:%d\nрезультат делени€ a/b с преобразовани€ в float:%f\n результат делени€ a/b с преобразованием в double:%lf\n",(int)a/b, (float)a / b, (double)a / b);

    //задание 3

    int pickme;

    printf("введите целое 3х значное число :");
    scanf_s("%d", &pickme);

    printf("\nпоследн€€ цифра числа: %d\nперва€ цифра числа: %d\nсумма цифр данного числа: %d\nчисло наоборот:%d%d%d\n", pickme % 10, pickme / 100, (pickme % 10) + (pickme / 10) % 10 +(pickme/100), pickme%10, (pickme/10)%10, pickme/100);

    return 0;
}




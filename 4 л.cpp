               //4 ����
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

    printf("������� %c:\n",c);
    printf("������� %d:\n", i);
    printf("������� %f:\n", f);
    printf("������� %e:\n", d);

    char pz;
    int iz;
    float fz;
    double dz;

    printf("������ pz:");
    scanf_s("%c",&pz);
    printf("%c\n", pz);

    printf("������ iz:");
    scanf_s("%d", &iz);
    printf("%d\n", iz);

    printf("������ fz:");
    scanf_s("%f", &fz);
    printf("%f\n", fz);

    printf("������ dz:");
    scanf_s("%le", &dz);
    printf("%le\n", dz);
    
    //1a
    int pupu2;
    pupu2 = (int)fz;

    printf("\n ����� ����� ����� %d", pupu2);
    printf("\n������� ����� �� ����� %.2f", fz - pupu2);
    //1�
    printf("\n 10 ������ %i", pupu2);
    printf("\n 16 ������  %x", pupu2);
    //1�
    double pupu3;
    pupu3 = 1.0 / pupu2;

    printf("\n  ���������� �����, �������������� 1/i  1/%d = %.2lf\n",pz,pupu3);

   // ������� 2
    int a = 11;
    int b = 3;
   
    printf("\n������������� �������:%d\n��������� ������� a/b � �������������� � float:%f\n ��������� ������� a/b � ��������������� � double:%lf\n",(int)a/b, (float)a / b, (double)a / b);

    //������� 3

    int pickme;

    printf("������� ����� 3� ������� ����� :");
    scanf_s("%d", &pickme);

    printf("\n��������� ����� �����: %d\n������ ����� �����: %d\n����� ���� ������� �����: %d\n����� ��������:%d%d%d\n", pickme % 10, pickme / 100, (pickme % 10) + (pickme / 10) % 10 +(pickme/100), pickme%10, (pickme/10)%10, pickme/100);

    return 0;
}




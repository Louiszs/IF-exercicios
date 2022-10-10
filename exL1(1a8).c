#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("informe a questao que voce quer verificar: ");
    scanf("%d",&num);

    switch (num)
    {
        case 1:
            ex1();
            break;
        case 2:
            ex2();
            break;
        case 3:
            ex3();
            break;
        case 4:
            ex4();
            break;
        case 5:
            ex5();
            break;
        case 6:
            ex6();
            break;
        case 7:
            ex7();
            break;
        case 8:
            ex8();
            break;
        default:
            system("cls");
            printf("questao nao existe");
        break;
    }
}

void ex1()
{
    system("cls");
    int num;
    printf("informe um numero: ");
    scanf("%d",&num);
    printf("\n");
    printf("o numero informado foi: %d",num);
}
void ex2()
{
    system("cls");
    float n1,n2,n3,soma;
    printf("informe 3 numeros: ");
    scanf("%f %f %f",&n1,&n2,&n3);
    printf("\n");

    soma = n1+n2+n3;

    printf("a soma dos numeros eh: %f",soma);
}
void ex3()
{
    system("cls");
    float n1, quad;

    printf("informe um numero para ser elevado ao quadrado: ");
    scanf("%f",&n1);
    printf("\n");

    quad = pow(n1,2);

    printf("seu numero ao quadrado: %f",quad);
}
void ex4()
{
    system("cls");
    float n,quinta;

    printf("informe um numero:");
    scanf("%f",&n);

    quinta = n*0.2;

    printf("a quinta parte do seu numero eh: %.2f",quinta);
}
void ex5()
{
    system("cls");
    float C, F;

    printf("informe uma temperatura em Celsius: ");
    scanf("%f",&C);

    F = C * (9.0/5.0) + 32;

    printf("a conversão de celsius para fahrenheit eh: %.2f",F);
}
void ex6()
{
    system("cls");
    float F,C;

    printf("informe uma temperatura em graus fahrenheit: ");
    scanf("%f",&F);

    C = 5.0 *(F-32)/9;

    printf("sua temperatura em Celsiu eh: %.2f",C);
}
void ex7()
{
    system("cls");
    float K,C;

    printf("informe a temperatura em graus kelvin: ");
    scanf("%f",&K);

    C = K-273.15;

    printf("sua temperatura em Celsius eh: %.2f",C);
}
void ex8()
{
    system("cls");
    float C,K;

    printf("informe uma temperatura em graus celsius: ");
    scanf("%f",&C);

    K= C+273.15;

    printf("sua temperatura em graus kelvin: %.2f",K);
}
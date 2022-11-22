#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.141592
int main()
{
    int n;

    printf("informe o numero da questao: ");
    scanf("%d",&n);
    switch(n){
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
    }

}

void ex1()
{
    system("cls");
        int i,j=1;
    float  base,altura,area;

    printf("informe a quantidade de triangulos: ");
    scanf("%d",&i);

    while(j<=i){
        printf("informe a base e a altura: ");
        scanf("%f %f",&base,&altura);
        area = base * altura/2;
        printf("resultado: %f \n",area);
        j++;
    }

}

void ex2()
{
    system("cls");
    int i,j=1;
    float area, lado;

    printf("informe a quanidade de quadrilateros: ");
    scanf("%d",&i);

    while(j<=i){
        printf("informe os lados de um quadrado: ");
        scanf("%f",&lado);

        area = pow(lado,2);

        printf("seu resultado: %f \n",area);
        j++;
    }
}

void ex3()
{
    system("cls");
    int i,j=1;
    float raio, area;
    printf("informe a quantidade de circulos: ");
    scanf("%d",&i);

    while(j<=i){
        printf("informe o raio do circulo: ");
        scanf("%f",&raio);
        area = pi * pow(raio,2);

        printf("seu resultado: %f \n",area);
        j++;
    }
}
void ex4()
{
    int i=35, j=15,n;

    while(j<=i)
    {
        n = pow(j,2);
        printf("%d \n",n);
        j++;
    }
}
void ex5()
{
    system("cls");
    int j=0,n;

    while(j<=100)
    {
        n = j + j;
        j++;
    }
    printf("%d",n);
}
void ex6()
{
    system("cls");
    int j=0,n;

    while(j<=500)
    {
        if(j % 2 == 0){
            n = j + j;
        }
        j++;
    }
    printf("%d",n);
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Página 46 - 2.2 e 2.6
Página 47 - 2.9 e 2.10
Página 63 - 11
*/
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
            //ex5();
            break;
        default:
            system("cls");
            printf("questão nao existe");
        break;
    }
}

void ex1()
{
    system("cls");
    int n1,n2,n3, maior, menor, medio;

    printf("informe 3 valores: ");
    scanf("%d %d %d",&n1,&n2,&n3);
//seleção do maior
    if(n1 > n2 && n1 > n3){
        maior = n1;
    }else if(n2 > n1 && n2 > n3 ){
        maior = n2;
    }else if(n3 > n1 && n3 > n2){
        maior = n3;
    }
//seleção do menor
    if(n1 < n2 && n1 < n3){
        menor = n1;
    }else if(n2 < n1 && n2 < n3 ){
        menor = n2;
    }else if(n3 < n1 && n3 < n2){
        menor = n3;
    }
//seleção do medio
    if (n1 != maior && n1 != menor)
    {
        medio = n1;
    }else if(n2 != maior && n2 != menor){
        medio = n2;
    }else if(n3 != maior && n3 != menor){
        medio = n3;
    }

    printf("ordem decrescente: %d %d %d",menor, medio, maior);
    printf("\n");
    printf("ordem crescente: %d %d %d",maior , medio, menor);
}

void ex2()
{
    system("cls");
    int num;

    printf("informe o codigo: ");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf("alimento nao-perecivel");
        break;
    case 2 ... 4:
        printf("alimento perecivel");
        break;
    case 5 ... 6:
        printf("Vestuario");
        break;
    case 7:
        printf("Higiene pessoal");
        break;
    case 8 ... 15:
        printf("Limpeza e utensilios domesticos");
        break;
    default:
        printf("codigo invalido!");
        break;
    }
}

void ex3()
{
    system("cls");
    int num1, num2;
    char op;

    printf("informe dois numeros inteiros: ");
    scanf("%d %d",&num1,&num2);
    fflush(stdin);
    printf("informe o simbolo da operacao matematica desejada: ");
    scanf("%c",&op);

    switch (op)
    {
    case '+':
        num1 += num2;
        printf("sua soma eh: %d", num1);
        break;
    case '-':
        num1 -= num2;
        printf("sua subtracao eh: %d",num1);
        break;
    case '*':
        num1 *= num2;
        printf("sua multiplicacao eh: %d",num1);
        break;
    case '/':
        num1 /= num2;
        printf("sua divisao eh: %d",num1);
        break;
    default:
        printf("operacao invalida!");
        break;
    }
}
void ex4()
{
    system("cls");
    int peso = 0;
    float alt = 0 , imc =0;

    printf("informe seu peso:  ");
    scanf("%d",&peso);
    printf("informe sua altura: ");
    scanf("%f",&alt);
    alt *= alt;
    imc = peso / alt;
    if(imc < 18,5)
    {
        printf("abaixo do peso!");
    }else if(imc >= 18,5 && imc < 25){
        printf("peso normal!");
    }else if(imc >= 25 && imc < 30){
        printf("acima do peso!");
    }else if(imc >= 30){
        printf("obeso!");
    }
    printf("%f",imc);
}
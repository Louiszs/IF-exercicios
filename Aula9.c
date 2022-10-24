#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



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
        default:
            system("cls");
            printf("questão nao existe");
        break;
    }
}

void ex1()
{
    system("cls");

    int num;

    printf("informe um numero qualquer: ");
    scanf("%d",&num);

    system("cls");

    if(num >= 1 && num<=100 ){ 
        printf("grupo 1");
    }else if(num>=101 && num <=1000){
        printf("grupo 2");
    }else if(num >=000){
        printf("grupo 3");
    }else printf("codigo invalido");
}

void ex2()
{
    system("cls");

    int cod;
    float sal_a, sal_n, aumento;

    printf("informe o codigo do cargo: ");
    scanf("%d",&cod);
    printf("informe seu salario atual: ");
    scanf("%f",&sal_a);

    system("cls");

    switch (cod)
{
    case 101:
        printf("Gerente \n");
        aumento = sal_a * 0.10;
        break;
    case 102:
        printf("Engenheiro \n");
        aumento = sal_a * 0.20;
        break;
    case 103:
        printf("Tecnico \n");
        aumento = sal_a * 0.30;
        break;
    default:
        aumento = sal_a * 0.40;
        break;
}
    sal_n = sal_a + aumento;

    printf("Salario atual: %.2f \n", sal_a);
    printf("Aumento: %.2f \n", aumento);
    printf("Novo salario: %.2f",sal_n);
}

void ex3()
{
    system("cls");
    int num;

    printf("informe o numero do mes: ");
    scanf("%d",&num);

    switch(num){
     case 1:  
        printf("Janeiro!!");
        break;
     case 2:
        printf("Fevereiro!!");
        break;
     case 3:
        printf("Marco!!");
        break;
     case 4:
        printf("Abril!!");
        break;
     case 5:
        printf("Maio!!");
        break;
     case 6:
        printf("Junho!!");
        break;
     case 7:
        printf("Julho!!");
        break;
     case 8:
        printf("Agosto!!");
        break;
     case 9:
        printf("Setembro!!");
        break;
     case 10:
        printf("Outubro!!");
        break;
     case 11:
        printf("Novembro!!");
        break;
     case 12:
        printf("Dezembro!!");
        break;
     default:
        printf("mes invalido");
        break;
    }   
}

void ex4()
{
    system("cls");
    fflush(stdin);
    char estado;

    printf("informe a letra inicial do seu estado civil: ");
    scanf("%c",&estado);

    switch(tolower(estado)){

      case 'c':
        printf("Casado(a)");
        break;
      case 'q':
        printf("Desquitado(a)");
        break;
      case 's':
        printf("Solteiro(a)");
        break;
      case 'd':
        printf("Divorciado(a)");
        break;
      case 'v':
        printf("Viuvo");    
        break;
      default:
        printf("invalido");
    }

}
void ex5()
{
    system("cls");
    int age;

    printf("informe a sua idade: ");
    scanf("%d",&age);

    switch (age)
    {
        case 4 ... 7:
            printf("Infantil A");
            break;
        case 8 ... 10:
            printf("Infantil B");
            break;
        case 11 ... 13:
            printf("Juvanil A");
            break;
        case 14 ... 17:
            printf("Juvenil B");
            break;
        default: printf("Adulto"); break;
    }
}

void ex6()
{
    system("cls");

    int cod;
    float valor,aux;

    printf("informe o valor do produto: ");
    scanf("%f",&valor);
    printf("informe o codigo do pagamento: ");
    scanf("%d",&cod);

    switch (cod)
    {
    case 1:
        system("cls");
        aux = valor * 0.10;
        valor = valor - aux;
        printf("A vista dinheiro ou cheque \n");
        printf("valor com desconto: %.2f",valor);
        break;
    case 2:
        system("cls");
        aux = valor * 0.5;
        valor = valor - aux;
        printf("A vista no cartao de credito \n");
        printf("valor com desconto: %.2f",valor);
        break;
    case 3:
        system("cls");
        valor = valor/2;
        printf("Parcelado em duas vezes\n");
        printf("valor: %.2f",valor);
        break;
    case 4:
        system("cls");
        float i,j;
        aux = (valor * 0.10) * 3;//acrescidos em 3 meses
        j = valor + aux; // valor total em 3 meses
        i = (valor * 0.10) + valor; // valor a ser pago a cada mes
        printf("Em tres vezes com juros\n");
        printf("valor a pagar a cada mes: %.2f\n",i);
        printf("valor total: %.2f",j);
        break;
    default:
        printf("codigo invalido!");
        break;
    }
}
void ex7()
{
    system("cls");
    int i,num;
    for(i=0;i<3;i++)
    {
        printf("informe um numero: ");
        scanf("%d",&num);
        if(num > num){
            num = num;
        }
    }
    printf("o maior: %d",num);
}
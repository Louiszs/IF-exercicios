#include <stdio.h>

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
        default:
            system("cls");
            printf("questao nao existe");
        break;
    }
}
void ex1()
{
    system("cls");
    float n1,n2,n3,media,p1,p2,p3,soma,multi;

    printf("informe 3 notas: ");
    scanf("%f %f %f",&n1,&n2,&n3);
    printf("\n");
    printf("informe 3 pesos: ");
    scanf("%f %f %f",&n1,&n2,&n3);
    
    soma = p1+p2+p3;
    multi = (n1*p1)+(n2*p2)+(n3*p3);
    media = multi/soma;

    printf("sua media ponderada eh: %f",media);

}

void ex2()
{
    system("cls");
    int N,A,S;

    printf("informe um numero: ");
    scanf("%d",&N);

    A= N - 1;
    S= N + 1;

    printf("o numero sucessor eh: %d",S);
    printf("\n");
    printf("o numero antecessor eh: %d",A);
}
void ex3()
{
    system("cls");
    int idade, ano, ano_n;

    printf("informe sua idade e o ano: ");
    scanf("%d %d",&idade,&ano);

    ano_n = ano - idade;
    printf("seu ano de nascimento eh: %d",ano_n);
}
void ex4()
{
    system("cls");
    float C,L, preco, peri;

    printf("informe o comprimento, a largura e o preco: ");
    scanf("%f %f %f",&C,&L,&preco);

    peri = C*2+L*2;
    preco = peri * preco;
    printf("O custo para cada cerca serah: %f", preco);

}
void ex5()
{
    system("cls");
    float M, D, C, Mil;

    printf("informe um valor em metros: ");
    scanf("%f",&M);

    D = M/10;
    C = M/100;
    Mil = M/1000;

    printf(" seu valor em decimetros: %.2f",D);
    printf("\n");
    printf(" seu valor em centimetros: %.2f",C);
    printf("\n");
    printf(" seu valor em milimetros: %.2f",Mil);
}
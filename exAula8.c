#include <stdio.h>
#include <stdlib.h>



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

    if(cod == 101){
        printf("Gerente");
        aumento = sal_a * 0.10;
    }else if(cod == 102){
        printf("Engenheiro");
        aumento = sal_a * 0.20;
    }else if(cod == 103){
        printf("Tecnico");
        aumento = sal_a * 0.30;
    }else aumento = sal_a * 0.40;

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

    if(num == 1 ){
        printf("Janeiro!!");
    }else if(num == 2){
        printf("Fevereiro!!");
    }else if(num == 3){
        printf("Marco!!");
    }else if(num == 4){
        printf("Abril!!");
    }else if(num == 5){
        printf("Maio!!");
    }else if(num == 6){
        printf("Junho!!");
    }else if(num == 7){
        printf("Julho!!");
    }else if(num == 8){
        printf("Agosto!!");
    }else if(num == 9){
        printf("Setembro!!");
    }else if(num == 10){
        printf("Outubro!!");
    }else if(num == 11){
        printf("Novembro!!");
    }else if(num == 12){
        printf("Dezembro!!");
    }else printf("mes invalido");
    
}

void ex4()
{
    system("cls");
    fflush(stdin);
    char estado[10];

    printf("informe a letra inicial do seu estado civil: ");
    scanf("%c",&estado);

    if(estado == "C"||"c")
    {
        printf("Casado(a)");
    }else if(estado == "Q"||"q"){
        printf("Desquitado(a)");
    }else if(estado == "S"||"s"){
        printf("Solteiro(a)");
    }else if(estado == "D"||"d"){
        printf("Divorciado(a)");
    }else if(estado == "V"||"v"){
        printf("Viuvo");
    }else printf("invalido");

}
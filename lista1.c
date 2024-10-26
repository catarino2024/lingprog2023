#include <stdio.h>
#include <stdlib.h>
/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q01() {
    printf("João Paulo\n");
}
void q1(){
    printf("catarino de souza\n");
}
//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q02()
 {
    printf("30*27= %d" , 30*27);
} 
}
//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q03()
 {
    //int=inteiro    float=real    char=caractere   char[20]
    int num1 = 5;
    int num2 = 8;
    int num3 = 12;
    float media = (5+8+12)/3.0;
    printf("Media de 5,8,12 é igual a %1f\n", num1, num2, num3, media);
}

//4. Faça um programa que leia e imprima um número inteiro.
void q04() {
    int numero =0;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    printf("Número digitado foi %d\n", numero);
}

//5. Faça um programa que leia dois números reais e os imprima.
void q05()
{
    int numero;
    printf("digite um numero real:");
    scanf("%d", &numero 2:");
    printf("numero real foi %f %f",n, n2);
}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q06 ()
{
    float n;
    printf("digite o numero :");
    scanf("%f" ,&n);
    printf("antecessor: &f e sucessor: %f" n-1 , n+1);
}
//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q07()
 {
    char nome[100], endereco[100], telefone[100];
    printf("digite seu Nome);
    scanf("%s",&nome);
    printf("digite seu telefone:" );
    scanf("%s", &telefone);
    print("digite seu enderço:")");
    scanf(" %s",&endereço);
    printf("Nome: %s\nEndereço: %s\nTelefone: %s\n",nome,endereco,telefone);
}
> git add*.C 

/8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q08()
{
int n,n2, subtraçao:
printf ("digite os numero 1:";
scanf(" %d", &n);
printf ("digite o numero 2 :");
scanf("%d" , &n2);
subtraçao = n - n2;
printf("resultado: %d" , subtraçao);
}

//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.
void q09 ()
{
float n, resultado;
printf ("digite o numero: ");
scanf("%f ", &n");
resultado = n / 4 ;
printf("resultado : %f" , resultado);

}
//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
 void 10()
 {
    float n1, n2, n3, media;
    print("digite o numero 1: ");
    scanf("%f" ,%n1);
    printf("digite o numero 2 :");
    scanf("%f", &n2);
    printf("digite o numero 3:");
 }
//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void 11()
{
float n1,n2, resultado;
printf("digite o numero 1:");
scanf("%f", &n1);
printf("digite o numero 2:");
scanf("%f", &n2:);
resultado = n1 + n2 ;
printf("\nsoma: %f", resultado);
resultao = n1 - n2;
printf("\nsubtraçao: %f",  resultado);
resultado = n1 * n2;
printf ("\n multiplicaçao:%f", resultado);
resultado = n1 /n2;
printf("\n divisao %f", resultado);
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void 12 ()
{
 float num, reultado;
 printf("digite o numero:");
 scanf("%f", &num);
 resultado = num * num ;
 printf("quadrado do numero : %f", resultado);
 }

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void 13 () 
{

float saldo, novo saldo;
printf("digite o saldo :");
scanf("%f", &saldo);
novosaldo = saldo + saldo * 0.02;
printf("saldo com reajuste : %f", novo saldo);

}
//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base + altura) e a área (base * altura).
void 14()
{
    float base , altura , perimetro, area;
    printf("digite a base :");
    scanf("%f", &base);
    printf("digite a altura :");
    scanf("%f", &altura);
    perimetro = base + altura;
    area = base * altura;
    printf("perimetro :%F \n", perimetro);
    printf("area:%f \n", area);

}
//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
{
void 15()
float vlrprod, percdesc, vlrdesc;
printf("digite o vlaor do produto:");
scanf("%f", &vlrprod);
printf("digite o desconto:");
scanf("%f", &percdesc);
vlrdesc = vlrprod - (vlrprod *(percdesc /100));
}

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.
void 16 ()
{
    float salario , percreajuste , vlrReajuste;
    printf("digite o valor do salario do funcionario:");
    scanf("%f", &salario);
    printf("digite o percebtual de reajuste :");
    scanf("%f", &percReajuste);
    vlrReajuste = salario +(salario *(percReajuste/100));
    printf("produto com desconto: %f", vlrReajuste);

}
//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5
void 17()
{
    float gCentigrados , gFahrenheit;
    printf("digite o valor em graus centigrados:");
    scanf("%f", &gCentigrados);
    gFahrenheit = (9 * gCentigrados + 160)/5;
    printf("temperatura em fahrenheit: &f", gFahrenheit);

}
//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.
void 18 ()
{
    float tempodecorrido, velocidademedia, distaciapercorrida,combustivel;
    printf("digite o tempo de viagem em horas:");
    scanf("%f", &tempodecorrido);
    printf("digite a velocidade media :");
    scanf("%f", &velocidademedia);
    distaciapercorrida = tepodecorrido * velocidademedia;
    combustivel = distanciapercorrida / 12;
    printf("quantidade de litros consumidos: %f",combustivel);

}

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.
{
    void 19 ()
    int periodoAtraso;
    float valorVencido, taxaJuros,juros, novoValor;
   printf("digite o valo da prestaçao vencida:");
   scanf("%f", &valorVencido);
   printf("taxa de juros:");
   scanf("%f", &taxajuros);
   printf("periodo de atraso:");
   scanf("%d", &periodoAtraso);
   juros = (valorVencido *(taxajuros / 100)) * periodoAtraso);
   novoValor = valorVencido + juros;
   printf("valor da prestaçao: %f \n", valorVencido);
   printf("periodo de atraso : %d \n" , juros );
   printf("juros a ser cobrados : %f \n", juros);
   printf("valor da prestaçao com juros: %.2f" ,novoValor);

}

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.
void 20()
{
    float cotDolar, vlrDolar , conversando;
    printf(" digite o valor em dolar:");
    scanf("%f", &vlrDolar);
    printf("digite a cotaçao do dolar:");
    scanf("%f", &cotDolar);
    conversao = vlrDolar * cotDolar;
    printf("conversao em reais : %.2f" , conversao);
}

int main(){}

      return EXIT_SUCCESSO

      void q01();{

       void q02();{

       void q03();{

      void q04();{

      void q05();{

      void q06();{

      void q07();{
        }
             
}

    

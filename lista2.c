/*
EXERCÍCIOS DO CAPÍTULO 2
*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//1. Faça um programa que leia dois valores numéricos inteiros e efetue a adição, caso o resultado seja maior que 10, apresentá-lo.
void questao01() {
	int n1, n2, adicao;
printf("Digite o numero 1: ");
scanf("%d",&n1);
printf("Digite o numero 2: ");
scanf("%d",&n2);
adicao = n1 + n2;
if (adicao > 10)
printf("%d", adicao);
}
//2. Faça um programa que leia dois valores inteiros e efetue a adição. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8, caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.
void questao02() {
	int n1, n2, adicao;
	printf("Digite o numero 1: ");
	scanf("%d",&n1);
	printf("Digite o numero 2: ");
	scanf("%d",&n2);
	adicao = n1 + n2;
	if (adicao > 20) {
		adicao += 8;
	}
	else{

   adicao -= 5;
}
printf("%d", adicao);
}


//3. Faça um programa que leia um número e imprima uma das duas mensagens: "É múltiplo de 3"ou "Não é múltiplo de 3".
void questao03() {
	int num;
	printf("Digite o numero: ");
	scanf("%d", &num);
	if ((num % 3) == 0)
printf("E multiplo de 3");
else
printf("Nao e Multiplo de 3");
}

//4. Faça um programa que leia um número e informe se ele é ou não divisível por 5.
void questao04() {
	int num;
	printf("Digite o numero: ");
	scanf("%d", &num);
	if ((num % 5) == 0)
	printf("E divisivel por 5");
else
printf("Nao e divisivel por 5");
}


//5. Faça um programa que leia um número e informe se ele é divisível por 3 e por 7.
void questao05() 
{
int num;
printf("Digite o numero: ");
scanf("%d", &num);
if ((num % 3) == 0 && (num % 7) == 0)
printf("Divisivel por 3 e por 7");
else
printf("Nao e divisivel por 3 e por 7");

}

//6. A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
//estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
//bruto. Faça um programa em linguagem C que permita entrar com o salário bruto e o
//valor da prestação e informar se o empréstimo pode ou não ser concedido.
void questao06() {
int salario, prestacao;
printf("Digite o salario bruto: ");
scanf("%d",&salario);
printf("Digite o valor da prestacao: ");
scanf("%d",&prestacao);
if (prestacao <= (salario * 0.3))
printf("Emprestimo consedido");
else
printf("Emprestimo nao consedido");
}

//7. Faça um programa que leia um número e indique se o número está compreendido
//entre 20 e 50 ou não.
void questao07() {
int num;
printf("Digite o numero: ");
scanf("%d",&num);
if (num >= 20 && num <= 50)
printf("Numero entre 20 e 50");
else
printf("Numero menor que 20 ou maior que 50");
}

//8. Faça um programa que leia um número e imprima uma das mensagens: 
//"Maior do que 20", "Igual a 20"ou "Menor do que 20".
void questao08() {
	int num;
	printf("Digite o numero: ");
	scanf("%d", &num);
	if (num > 20)
	printf("Numero maior que 20");
else if (num == 20)
printf("Numero igual a 20");
else
printf("Numero menor que 20");

}


//9. Faça um programa que permita entrar com o ano de nascimento da pessoa e como ano
//atual. O programa deve imprimir a idade da pessoa. Não se esqueça de verificar se o
//ano de nascimento informado é válido.
void questao09() {
	int nascimento, anoAtual;
	printf("Digite o ano de nascimento: \n");
	scanf("%d", &nascimento);
	printf("Digite o ano atual: \n");
	scanf("%d", &anoAtual);
	if (nascimento > 0 && nascimento <= anoAtual) {
		printf("Sua idade: %d",anoAtual - nascimento);
}
else
printf("Data de nascimento invalida");
}

//10. Faça um programa que leia três números inteiros e imprima os três em ordem
//crescente.
void questao10() {
int n1, n2, n3;
printf("Digite o primeiro numero: ");
scanf("%d",&n1);
printf("Digite o segundo numero: ");
scanf("%d",&n2);
printf("Digite o terceiro numero: ");
scanf("%d",&n3);
if (n1 < n2 && n1 < n3) 
{
if (n2 < n3)
printf("%d, %d, %d", n1, n2, n3);
else
printf("%d, %d, %d", n1, n3, n2);
}
else if (n2 < n1 && n2 < n3) 
{
if (n1 < n3)
printf("%d, %d, %d", n2, n1, n3);
else
printf("%d, %d, %d", n2, n3, n1);
}
else {
	if (n2 < n1)
	printf("%d, %d, %d", n3, n2, n1);
else
printf("%d, %d, %d", n3, n1, n2);
}

 }

//11. Faça um programa que leia 3 números e imprima o maior deles.
void questao11() {
	int n1, n2, n3;
	printf("Digite o primeiro numero: ");
	scanf("%d",&n1);
	printf("Digite o segundo numero: ");
	scanf("%d",&n2);
	printf("Digite o terceiro numero: ");
	scanf("%d",&n3);
if (n1 > n2 && n1 > n3) {
	printf("Maior numero: %d", n1);
}
else if (n2 > n1 && n2 > n3) {
	printf("Maior numero: %d", n2)
}
else{
	printf("Maior numero: %d", n3);
 
  }
}

//12. Faça um programa que leia a idade de uma pessoa e informe:
//• Se é maior de idade
//• Se é menor de idade
//• Se é maior de 65 anos
void questao12() {
	int idade;
	printf("Digite a idade: ");
scanf("%d",&idade);
if (idade >= 65)
printf("Maior que 65");
else if (idade >= 18)
printf("Maior de idade");
else
printf("Menor de idade");

}

//13. Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
//prova 2 de umaluno. O programa deve imprimir o nome, a nota da prova 1, a nota da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou "em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as demais em prova final).
void questao13() {
	float p1, p2, media;
	char nome[30];
printf("Nome do aluno: ");
scanf("%s", &nome);
printf("Digite a nota da prova 1: ");
scanf("%f",&p1);
printf("Digite a nota da prova 2: ");
scanf("%f",&p2);
media = (p1 + p2) / 2;
printf("-------------dados-------------\n");
printf("Aluno: %s \n", nome);
printf("Notas - P1: %f P2: %f \n", p1, p2);
printf("Media: %f \n", media);
if (media >= 7)
printf("aprovado");
else if (media >= 3)
printf("prova final");
else
printf("\n reprovado");

}

//14. Faça um programa que permita entrar com o salário de uma pessoa e imprima o
//desconto do INSS segundo a tabela seguir:
//Salário Faixa de Desconto
//Menor ou igual à R$600,00 Isento
//Maior que R$600,00 e menor ou igual a R$1200,00 20%
//Maior que R$1200,00 e menor ou igual a R$2000,00 25%
//Maior que R$2000,00 30%
void questao14() {
	int salario;
	printf("Digite o salario: ");
	scanf("%d",&salario);
	if (salario <= 600)
	printf("insento de inss");
else if (salario <= 1200)
printf("20%: %.2f", salario * 0.2);
else if (salario <= 2000)
printf("25%: %.2f", salario * 0.25);
else
printf("30%: %.2f", salario * 0.3);

}

//15. Um comerciante comprou umproduto e quer vendê-lo com umlucro de 45% se o valor
//da compra for menor que R$20,00, caso contrário, o lucro será de 30%. Faça um programa que leia o valor do produto e imprima o valor da venda.
void questao15() {
	float vlrProduto, vlrVenda;
	printf("Digite o valor do produto: ");
scanf("%f", &vlrProduto);
if (vlrProduto < 20) {
	vlrVenda = vlrProduto + (vlrProduto * 0.45);
}
else {
vlrVenda = vlrProduto + (vlrProduto * 0.3);
}
printf("Valor do produto para venda: %.2f \n", vlrVenda);
}

//16. A confederação brasileira de natação irá promover eliminatórias para o próximo
//mundial. Faça um programa que receba a idade de um nadador e imprima a sua categoria segundo a tabela a seguir:
//Categoria Idade
//Infantil A 5 - 7 anos
//Infantil B 8 - 10 anos
//Juvenil A 11 - 13 anos
//Juvenil B 14 - 17 anos
//Sênior maiores de 18 anos
void questao16() {
	int idade;
	printf("Digite a idade: ");
	scanf("%d", &idade);
	if (idade <= 4)
	printf("Idade nao permitida");
else {
if (idade <= 7)
printf("Infantil A");
else if (idade <= 10)
printf("Infantil B");
else if (idade <= 13)
printf("Juvenil A");
else if (idade <= 17)
printf("Juvenil B");
else
printf("Senior");
}

//17. Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Umvendedor de um plano de saúde apresentou a tabela a seguir. Faça um programa que entre com o nome e a idade de uma pessoa e imprima o nome e o valor que ela deverá pagar.
//Idade Valor
//Até 10 anos R$30,00
//Acima de 10 até 29 anos R$60,00
//Acima de 29 até 45 anos R$120,00
//Acima de 45 até 59 anos R$150,00
//Acima de 59 até 65 anos R$250,00
//Maior que 65 anos R$400,00
void questao17() {
char nome [100];
 int idade;
 printf("Digite o nome: ");
 scanf("%s", &nome);
 printf("Digite a idade: ");
 scanf("%d", &idade);
  if (idade <= 10)
    printf("Valor: 30 reais");
 else if (idade <= 29)
    printf("Valor: 60 reais");
 else if (idade <= 45)
    printf("Valor: 120 reais");
 else if (idade <= 59)
     printf("Valor: 150 reais");
 else if (idade <= 65)
    printf("Valor: 250 reais");
 else
     printf("valore : 400");
}

//18. Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês correspondente. Caso o usuário digite umnúmero fora desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número. Utilize o switch para este problema.
void questao18() {
	int mes;
	 printf("Digite o mes: ");
scanf("%d",&mes);
 switch (mes) {
 case 1:
 printf("Janeiro \n");
 break;
 case 2:
 printf("Fevereiro \n");
 break;
 case 3:
 printf("Marco \n");
 break;
 case 4:
 printf("Abril \n");
 break;
 case 5:
 printf("Maio \n");
 break;
 case 6:
 printf("Junho \n");
 break;
 case 7:
 printf("Julho \n");
 break;
 case 8:
 printf("Agosto \n");
 break;
 case 9:
 printf("Setembro \n");
 break;
 case 10:
 printf("Outubro \n");
 break;
case 11:
 printf("Novembro \n");
 break;
 case 12:
 printf("Dezembro \n");
 break;
 default:
 printf("Mes invalido! \n");
}
}

//19. Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o mesmo número de pontos, criar um programa que informe se uma equipe foi classificada, de acordo com a seguinte especificação:
//• Ler os pontos obtidos por cada jogador da equipe;
//• Mostrar esses valores em ordem decrescente;
//• Se a soma dos pontos for maior do que 100, imprimir a média aritmética entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".
void questao19() {
	float n1, n2, n3;
 printf("Digite os pontos do primeiro atleta: ");
 scanf("%f",&n1);
 printf("Digite os pontos do segundo atleta: ");
 scanf("%f",&n2);
 printf("Digite os pontos do terceiro atleta: ");
 scanf("%f",&n3);
 if (n1 < n2 && n1 < n3) {
 if (n2 < n3)
 printf("%f, %f, %f", n1, n2, n3);
 else
 printf("%f, %f, %f", n1, n3, n2);
 }
 else if (n2 < n1 && n2 < n3) {
 if (n1 < n3)
 printf("%f, %f, %f", n2, n1, n3);
 else
 printf("%f, %f, %f", n2, n3, n1);
 }
 else {
 if (n2 < n1)
 printf("%f, %f, %f", n3, n2, n1);
 else
 printf("%f, %f, %f", n3, n1, n2);
 }
 float media = (n1 + n2 + n3) / 3;
 if ((n1 + n2 + n3) >= 100)
 printf("\n%.2f", media);
 else
 printf("\nEquipe desclassificada");
}

//20. O banco XXX concederá um crédito especial com juros de 2% aos seus clientes de acordo com o saldomédio no último ano. Faça um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir. O programa deve imprimir uma mensagem informando o saldo médio e o valor de crédito.
//Saldo Médio Percentual
//de 0 a 500 nenhum crédito
//de 501 a 1000 30% do valor do saldo médio
//de 1001 a 3000 40% do valor do saldo médio
//acima de 3001 50% do valor do saldo médio
void questao20() {
	
}

//21. A biblioteca de uma Universidade deseja fazer um programa que leia o nome do livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir. Considerar que o professor tem dez dias para devolver o livro e o aluno só três dias.
//• Nome do livro:
//• Tipo de usuário:
//• Total de dias:
void questao21() {
	
}

//22. Construa um programa que leia o percurso em quilómetros, o tipo do carro e informe o consumo estimado de combustível, sabendo-se que umcarro tipo C faz 12 kmcom umlitro de gasolina, um tipo B faz 9 kme o tipo C, 8 kmpor litro.
void questao22() {
	
}

//23. Crie um programa que informe a quantidade total de calorias de uma refeição a partir da escolha do usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.
//Prato Sobremesa Bebida
//Vegetariano 180cal Abacaxi 75cal Chá 20cal
//Peixe 230cal Sorvete diet 110cal Suco de laranja 70cal
//Frango 250cal Mousse diet 170cal Suco de melão 100cal
//Carne 350cal Mousse chocolate 200cal Refrigerante diet 65cal
void questao23() {

}

//24. A polícia rodoviária resolveu fazer cumprir a lei e vistoriar veículos para cobrar dosmotoristas o DUT. Sabendo-se que o mês em que o emplacamento do carro deve ser renovado é determinado pelo último número da placa do mesmo, faça um programa que, a partir da leitura da placa do carro, informe omês em que o emplacamento deve ser renovado.
void questao24() {
	
}

//25. A prefeitura contratou uma firma especializada para manter os níveis de poluição considerados ideais para umpaís do 1º mundo. As indústrias, maiores responsáveis pela poluição, foram classificadas em três grupos. Sabendo-se que a escala utilizada varia de 0,05 e que o índice de poluição aceitável é até 0,25, fazer um programa que possa imprimir intimações de acordo com o índice e a tabela a seguir:
//Índice Indústrias que receberão intimação
//0,3 1º gurpo
//0,4 1º e 2º grupos
//0,5 1º, 2º e 3º grupos
void questao25() {
	
}

int main() {
	switch (opcao) {
		case 1:
			questao01();
			break;
		case 2:
			questao02();
			break;
		case 3:
			questao03();
			break;
		case 4:
			questao04();
			break;
		case 5:
			questao05();
			break;	
		case 6:
			questao06();
			break;
        case 7:
			questao07();
			break;
		case 8:
			questao08();
			break;
		case 9:
			questao09();
			break;	
		case 10:
			questao10();
			break;		
		case 11:
			questao11();
			break;
		case 12:
			questao12();
			break;	
		case 13:
			questao13();
			break;
		case 14:
			questao14();
			break;	
		case 15:
			questao15();
			break;	
		case 16:
			questao16();
			break;	
		case 17:
			questao17();
			break;	
		case 18:
			questao18();
			break;
		case 19:
			questao19();
			break;
		case 20:
			questao20();
			break;
		case 21:
			questao21();
			break;	
		case 22:
			questao22());
			break;	
		case 23:
			questao23();
			break;
		case 24:
			questao24();
			break;
		case 25:
			questao25();
			break;						
		default:

			printf("Opção inválida!");
	}
	
	return EXIT_SUCCESS;
} 
   

	
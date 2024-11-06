#include <stdio.h>
#include <stdlib.h>

/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1() {
    printf("Lucas Gomes \n");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2() {
    printf("30 x 27 = %d\n", 30*27);
}

//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.
void q3() {
    printf("Média de 5, 8 e 12 = %.2f\n", (5+8+12)/3.0 );
}

//4. Faça um programa que leia e imprima um número inteiro.
void q4() {
    int x;
    printf("Digite um número qualquer: \n");
    scanf("%d", &x);
    printf("Seu número é: %d\n", x);
}

//5. Faça um programa que leia dois números reais e os imprima.
void q5() {
    int x, y;
    printf("Digite um número qualquer: \n");
    scanf("%d", &x);
    printf("Digite outro número diferente do primeiro: \n");
    scanf("%d", &y);
    printf("Seus dois números são: %d e %d\n", x, y);
}
//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.
void q6() {
    int x;
    printf("Digite um número de sua escolha: \n");
    scanf("%d", &x);
    printf("O numero escolhido foi: %d\nSeu antecessor é: %d\nE seu sucessor é: %d\n", x, x-1, x+1);
}

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.
void q7() {
    char nome[50], ende[60], tel[14];
    printf("Digite o seu nome: \n");
    scanf(" %50[^\n]",nome);
    printf("Digite o seu endereço: \n");
    scanf(" %60[^\n]",ende);
    printf("Digite o seu telefone: \n");
    scanf(" %14[^\n]",tel);
    printf("Você é: %s\nSeu endereço é: %s\nSeu telefone é: %s\nEstá correto? \n", nome, ende, tel);
}

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.
void q8() {
    int x, y;
    printf("Escreva um número qualquer: \n");
    scanf("%d", &x);
    printf("Escreva mais um número: \n");
    scanf("%d", &y);
    printf("A subtração dos dois numeros será: %d\n", x-y);
}
//9. Faça um programa que leia um número real e imprima ¼ deste número.
void q9() {
    float x;
    printf("Digite qualquer número real: \n");
    scanf("%f", &x);
    printf("Quando dividimos seu número por 4, ele se torna aproximadamente: %.3f\n", x/4);
}

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q10() {
    float x,y,z;
    printf("Escreva 3 números reais em sequência: \n");
    scanf("%f %f %f", &x,&y,&z);
    printf("A média aritimética dos 3 números é: %.3f\n", (x+y+z)/3);
}
//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.
void q11() {
    float a,b,c,d;
    printf("Escreva 4 números reais a seguir: \n");
    scanf("%f %f %f %f", &a,&b,&c,&d);
    printf("A soma e a subtração deles é respectivamente: %.2f e %.2f\n", a+b+c+d, a-b-c-d);
    printf("Já a multiplicação e a divisão são: %.2f e %.2f\n", a*b*c*d,a/b/c/d);
}

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.
void q12() {
    float x;
    printf("Desta vez, escreva apenas UM número real: \n");
    scanf("%f",&x);
    printf("O quadrado desse número é: %.2f\n", x*x);
}
//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.
void q13() {
    float y;
    printf("Bem vindo!\nDigite o saldo da sua poupança atual para que possamos ajuda-lo com o reajuste: \n");
    scanf(" %f",&y);
    printf("O saldo da sua conta depois do reajuste será: %.2f\nEspero que tenhamos ajudado!\n", 102*y/100);
}

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).
void q14() {
    float x,y;
    printf("Descreva o retangulo na seguinte ordem: \nBase, altura\n");
    scanf("%f %f",&x,&y);
    printf("Sua área e seu perímetro são, respectivamente: %.2f e %.2f\n", x*2+y*2, x*y);
}

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.
void q15() {
    float p,des;
    printf("Digite o preço do seu produto para aproveitar o desconto!\n");
    scanf(" %f",&p);
    des=20*p/100;
    printf("O seu produto terá R$%.2f de desconto e seu novo valor será: R$%.2f!\nAproveite nossa loja!\n",des,p-des);
}

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.
void q16() {
    float s,r;
    printf("Digite o seu salário atual:\n");
    scanf(" %f",&s);
    printf("Digite a porcentagem do reajuste:\n");
    scanf("%f",&r);
    printf("O seu salário sofrerá um reajuste de %.1f passando a valer: R$%.2f\n",r,r*s/100+s);
}

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5
void q17() {
    int f,c;
    printf("Digite o valor em centígrados: \n");
    scanf(" %d", &c);
    f = (9 * c + 160) / 5;
    printf("O valor em Farenheint é de: %d\n",f);
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
void q18() {
    float d,t,v,l;
    printf("Digite o tempo(em horas) e a velocidade(em km/h) do carro, respectivamente: \n");
    scanf(" %f%f", &t,&v);
    d = t*v;
    l = d/12;
    printf("nessa viajem foi percorrida uma distância de %.1fKm e foram consumidos %.1fL de gasolina", d,l);
}

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.
void q19() {
    float c,j,i,m,t;
    c=0.0; j=0.0; i=0.0; m=0.0; t=0.0;
    printf(" Digite abaixo respectivamente o valor da prestação vencida, dos juros e do tempo de atraso do cliente: \n");
    scanf(" %f%f%f", &c,&i,&t);
    j = c*i*t/100;
    m = j+c;
    printf("O valor da sua prestação será de R$%.2f.\n", m);
    printf("Pois se passou um perído de %.1f em tempo,\num juros de %.2f,\ne o valor original era de R$%.2f.\n", t,j,c);

}

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.
void q20(){
    float r,d;
    r = 0;d= 0;
    printf("Escreva a cotação do dólar mais recente:\n");
    scanf(" %f",&d);
    printf("Escreva o valor original em reais:\n");
    scanf(" %f",&r);
    printf("Você terá o equivalente a $%.2f em dólares", r/d);
}

int main() {
    q19();
    q20();
    return EXIT_SUCCESS;
}
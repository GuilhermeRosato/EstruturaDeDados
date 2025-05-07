#include <stdio.h>
#define PI 3.1415
int main()
{
    int idade = 30;
    float altura = 1.75;
    double peso = 70.5;
    char inicial = 'A';
    float nota = 7.8;
    idade = 25;
    int num1,num2;
    const float  N=7.8;
    float calc1,calc2;

    printf("Idade: %d\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Peso: %.1f kg\n", peso);
    printf("Inicial do nome: %c\n", inicial);
    printf("Nota: %.1f\n",nota);
    printf("Na idade de %d anos, minha nota foi %.1f", idade, nota);
    printf("\n%.1f - %d - %d\n", peso, idade, idade);
    printf("Digite um número inteiro: ");
    scanf("%d",&num1);
    printf("Digite outro número inteiro: ");
    scanf("%d",&num2);
    printf("\nPrimeiro número: %d",num1);
    printf("\nSegundo número: %d",num2);
    printf("\nSoma: %d\n",num1+num2);
    //N=3.5;
    calc1=PI*2;
    calc2=N*3;
    //calc2=1234.78;
   
    printf("PI=%.4f \n",PI);
    printf("N=%.1f \n",N);
    printf("calc1=%.3f \n",calc1);
    printf("calc2=%.3f \n",calc2);
    return 0;
    return 0;
}

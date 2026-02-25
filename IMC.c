#include <stdio.h>

int main(){
    float peso;
    float altura;
    float imc;

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("O IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificação: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Classificação: Peso normal\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Classificação: Sobrepeso\n");
    } else if (imc >= 30 && imc < 35) {
        printf("Classificação: Obesidade grau I\n");
    } else if (imc >= 35 && imc < 40) {
        printf("Classificação: Obesidade grau II\n");   
    }
    else {
        printf("Classificação: Obesidade grau III(mórbida)\n");
    }
    return 0;
}
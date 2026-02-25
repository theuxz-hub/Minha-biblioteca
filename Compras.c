#include<stdio.h>

int main(){
    float valor1;
    float desconto_porcent;
    float valor_desconto;
    float valor_final;

    printf("Digite o valor total da compra: ");
    scanf("%f", &valor1);

    if (valor1 <= 100) {
        desconto_porcent = 0;
    } else if (valor1 >= 101 && valor1 <= 200) {
        desconto_porcent = 10;
    } else if (valor1 > 200) {
        desconto_porcent = 15;
    }

    valor_desconto = valor1 * (desconto_porcent / 100);
    valor_final = valor1 - valor_desconto;

    printf("Valor total da compra: %.2f\n", valor1);
    printf("Desconto aplicado: %.2f%%\n", desconto_porcent);
    printf("Valor do desconto: %.2f\n", valor_desconto);
    printf("Valor final: %.2f\n", valor_final);
    return 0;
}
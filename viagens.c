//biblioteca para entrada e saída de dados
#include <stdio.h>
// Função principal do programa
int main() {
// Declaração das variáveis para armazenar a distância, o preço do combustível e o total gasto
    float distancia;
    float preco;
    float total;
// Solicita ao usuário a distância a ser percorrida e o preço do combustível
    printf("Distancia que sera percorrida (km): ");
    scanf("%f", &distancia);
// Solicita ao usuário o preço do combustível por litro
    printf("Preco do combustivel por litro (R$): ");
    scanf("%f", &preco);
// Calcula o gasto total da viagem considerando que o carro consome 1 litro a cada 10 km
    total = (distancia / 10.0f) * preco;
// Exibe o resultado para o usuário
    printf("O gasto total da viagem sera de R$ %.2f\n", total);
    printf("Obrigado por usar nosso programa de calculo");
    return 0;

}

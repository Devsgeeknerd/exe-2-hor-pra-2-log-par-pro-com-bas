#include <stdio.h>

int main()
{
    // Declaração de variáveis para as dimensões do retângulo.
    float comprimento, largura;

    // Variáveis para armazenar a área e o perímetro do retângulo.
    float area, perimetro;

    // Solicita ao usuário as medidas do retângulo.
    printf("Digite o comprimento do retângulo: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do retângulo: ");
    scanf("%f", &largura);

    // Calcula a área multiplicando o comprimento pela largura.
    area = comprimento * largura;

    // Calcula o perímetro somando duas vezes o comprimento e duas vezes a largura.
    perimetro = 2 * comprimento + 2 * largura;

    // Exibe os resultados.
    printf("Area do retângulo: %.2f\n", area);
    printf("Perímetro do retângulo: %.2f\n", perimetro);

    return 0;
}

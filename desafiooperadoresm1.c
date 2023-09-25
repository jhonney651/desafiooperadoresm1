#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, antecessor, sucessor, resultado, tabuada, contador, resultado2;
    printf("==Bem-vindo ao Numeratrônico==");
    printf("\nDigite um número por favor: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("\nO antecessor de %d é %d e o sucessor é %d\n", numero, antecessor, sucessor);
    
    printf("\nQual valor da tabuada que você deseja saber?");
    scanf("%d", &tabuada);
    resultado = numero * tabuada;
    printf("\nA tabuada de %d X %d é: %d\n", numero, tabuada, resultado);
    printf("\nOs próximos números pares a partir de %d são:");
    contador = 2;
    while (contador < 7)
    {
        resultado2 = numero + contador;
        printf("\n%d", resultado2);
        contador = contador + 2;
    }
    
    printf("\nDigite qualquer tecla para sair");
    system("pause");
    return 0;
}

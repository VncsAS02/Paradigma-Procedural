#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Um código de uaa calculadora feito em C++ para explica como funciona um paradigma procedural. 
// Funções para cada operação matemática
float somar(float x, float y) {
    return x + y;
}

float subtrair(float x, float y) {
    return x - y;
}

float multiplicar(float x, float y ){
    return x * y;
}

float dividir(float x, float y) {
    if (y != 0) {
        return x / y;
    } else {
        printf("Erro: Divisão por zero!\n");
        return 0; // Retorna 0 em caso de erro
    }
}

float potencia(float base, float expoente){
	if(expoente == 0){
		return 1;
	} else{
		return (base * potencia(base, expoente-1));
	}
			
		
	
}

int main() {
	setlocale(LC_ALL, "portuguese");
    
	float n1, n2, resultado; 
    int opcao, continuar;
    
    printf("Seja bem vindo usuário :) , está é uma Calculadora simples, escolha uma opção e seja feliz!\n");

    do {
        printf("Escolha a operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Potência\n");
        scanf("%d", &opcao);

        // Solicita os números ao usuário
        printf("Digite o primeiro número: ");
        scanf("%f", &n1);
        printf("Digite o segundo número: ");
        scanf("%f", &n2);

        // Executa a operação escolhida
        switch (opcao) {
            case 1:
                resultado = somar(n1, n2);
                printf("Resultado: %.2f + %.2f = %.2f\n", n1, n2, resultado);
                break;
            case 2:
                resultado = subtrair(n1, n2);
                printf("Resultado: %.2f - %.2f = %.2f\n", n1, n2, resultado);
                break;
            case 3:
                resultado = multiplicar(n1, n2);
                printf("Resultado: %.2f * %.2f = %.2f\n", n1, n2, resultado);
                break;
            case 4:
                resultado = dividir(n1, n2);
                if (n2 != 0) {
                    printf("Resultado: %.2f / %.2f = %.2f\n", n1, n2, resultado);
                }
                break;
            case 5:
    			resultado = potencia(n1, n2);
    				printf("Resultado: %.2f ^ %.2f = %.2f\n", n1, n2, resultado);
                break;
            default:
                printf("Escolha inválida!\n");
                break;
        }

        // Pergunta se o usuário deseja continuar
        printf("Deseja realizar outro cálculo? (1 para sim :) / 2 para não :( ) : ");
        scanf(" %d", &continuar); // O espaço antes de %c ignora espaços em branco

    } while (continuar == 1);

    printf("Obrigado por usar a calculadora!\n");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Um c�digo de uaa calculadora feito em C++ para explica como funciona um paradigma procedural. 
// Fun��es para cada opera��o matem�tica
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
        printf("Erro: Divis�o por zero!\n");
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
    
    printf("Seja bem vindo usu�rio :) , est� � uma Calculadora simples, escolha uma op��o e seja feliz!\n");

    do {
        printf("Escolha a opera��o:\n");
        printf("1. Adi��o\n");
        printf("2. Subtra��o\n");
        printf("3. Multiplica��o\n");
        printf("4. Divis�o\n");
        printf("5. Pot�ncia\n");
        scanf("%d", &opcao);

        // Solicita os n�meros ao usu�rio
        printf("Digite o primeiro n�mero: ");
        scanf("%f", &n1);
        printf("Digite o segundo n�mero: ");
        scanf("%f", &n2);

        // Executa a opera��o escolhida
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
                printf("Escolha inv�lida!\n");
                break;
        }

        // Pergunta se o usu�rio deseja continuar
        printf("Deseja realizar outro c�lculo? (1 para sim :) / 2 para n�o :( ) : ");
        scanf(" %d", &continuar); // O espa�o antes de %c ignora espa�os em branco

    } while (continuar == 1);

    printf("Obrigado por usar a calculadora!\n");
    return 0;
}

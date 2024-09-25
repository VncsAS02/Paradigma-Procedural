#include <stdio.h>

/* Este código é pequeno, porém é capaz que causar um erro gigantesco. Ele foi feito para mostrar o quão perigoso pode ser
um erro de segmentação. O erro de segmentação ocorre quando um programa tenta acessar uma área de memória que não tem permissão para acessar.
A memória de um programa é dividida em segmentos, como a pilha (stack). Cada segmento tem permissões específicas sobre como pode ser acessado.
*/

int main() {
	
    // Aqui, o ponteiro é inicializado para NULL, o que significa que ele não aponta para nenhuma área de memória válida.
    
	int *x = NULL;
	
    printf("Esse codigo causara um erro de segmentacao! \n");
    
    /* Nesta linha, o programa tenta atribuir o valor 112345 ao ponteiro, logo,  ele está tentando acessar a memória onde ptr aponta. 
    Como ptr é NULL, isso resulta em um acesso a uma localização de memória não permitida, provocando o erro de segmentação.
	*/
	*x = 112345; 
    
	return 0;
}

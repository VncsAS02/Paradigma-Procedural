#include <stdio.h>

/* Este c�digo � pequeno, por�m � capaz que causar um erro gigantesco. Ele foi feito para mostrar o qu�o perigoso pode ser
um erro de segmenta��o. O erro de segmenta��o ocorre quando um programa tenta acessar uma �rea de mem�ria que n�o tem permiss�o para acessar.
A mem�ria de um programa � dividida em segmentos, como a pilha (stack). Cada segmento tem permiss�es espec�ficas sobre como pode ser acessado.
*/

int main() {
	
    // Aqui, o ponteiro � inicializado para NULL, o que significa que ele n�o aponta para nenhuma �rea de mem�ria v�lida.
    
	int *x = NULL;
	
    printf("Esse codigo causara um erro de segmentacao! \n");
    
    /* Nesta linha, o programa tenta atribuir o valor 112345 ao ponteiro, logo,  ele est� tentando acessar a mem�ria onde ptr aponta. 
    Como ptr � NULL, isso resulta em um acesso a uma localiza��o de mem�ria n�o permitida, provocando o erro de segmenta��o.
	*/
	*x = 112345; 
    
	return 0;
}

#include <stdio.h>

/*Codigo pequeno, porem pode ser muito prejudicial para a sa�de da sua CPU. Este c�digo cria um loop infinito que estressa a CPU, 
uma vez que ele continua a executar indefinidamente, imprimindo n�meros a cada itera��o.*/

int main() {
	
	//Para parar o c�digo, pressione Ctrl + c
	
    printf("Este programa pode estressar a CPU, cuidado! :(.\n");
	
	int i = 1;
	
	for(i;i>0;i++){
	
	printf("%d", i);
	
	}

}

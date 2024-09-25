#include <stdio.h>

/*Codigo pequeno, porem pode ser muito prejudicial para a saúde da sua CPU. Este código cria um loop infinito que estressa a CPU, 
uma vez que ele continua a executar indefinidamente, imprimindo números a cada iteração.*/

int main() {
	
	//Para parar o código, pressione Ctrl + c
	
    printf("Este programa pode estressar a CPU, cuidado! :(.\n");
	
	int i = 1;
	
	for(i;i>0;i++){
	
	printf("%d", i);
	
	}

}

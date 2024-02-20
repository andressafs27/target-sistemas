//Sequência de Fibonacci

#include <stdio.h>

int quadrado(int numero){
	int a=0;
	while(a *a < numero){
		a++;
	}
	return a*a == numero;
	
}
int Fibonacci(int numero){
	return quadrado(5 * numero * numero) || quadrado(5* numero * numero -4);
}

main()
{
	int numero;
	
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &numero);
	
	if(Fibonacci(numero)){
		printf("\nO numero %d  faz parte da sequência de Fibonacci\n", numero);
	}
	else{
		printf("\nO numero %d  nao faz parte da sequência de Fibonacci\n", numero);
	}
	
	
}

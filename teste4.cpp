#include <stdio.h>

int main(){
	
	float SP = 67.83643; 
	float RJ = 36.67866;
	float MG = 29.22988;
	float ES = 27.16548;
	float Outros = 19.84953;
	float total,percentual_SP, percentual_RJ, percentual_MG, percentual_ES, percentual_Outros;
	
	total = SP + RJ + MG + ES + Outros;
	
	percentual_SP = (SP / total) * 100; 
	percentual_RJ = (RJ / total) * 100; 
	percentual_MG = (MG / total) * 100; 
	percentual_ES = (ES / total) * 100; 
	percentual_Outros = (Outros / total) * 100; 
	
    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", percentual_SP);
    printf("RJ: %.2f%%\n", percentual_RJ);
    printf("MG: %.2f%%\n", percentual_MG);
    printf("ES: %.2f%%\n", percentual_ES);
    printf("Outros: %.2f%%\n", percentual_Outros);
}

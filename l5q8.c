#include<stdio.h>
#include<locale.h>
//C�lculo aproximado da quantidade de dias de vida de uma pessoa
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, d;
	printf("Digite sua idade: \n");
	scanf("%i", &i);
	d = i * 365;
	printf("A quantidade aproximada de dias que voc� j� viveu �: %i. \n", d);
	return(0);
}
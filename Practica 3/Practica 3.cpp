#include <stdio.h>

int main ()
{
char c;
	printf("Ingresa un caracter: \n");
	c=getchar();
	
	int h =(int) c; 
	if (48<= h&&h <=57){
	printf("Es un caracter alfa numerico :)\n");
	}else
	{
	if(65<= h&&h <=90){
	printf("Es una letra mayuscula :) \n");
	}else
	{
	if(97<= h&&h <=122){
	printf("Es una letra minuscula :)");
	}else
	{
	printf("Es un simbolo");
		}	
	}
}
	return 0;
}
	

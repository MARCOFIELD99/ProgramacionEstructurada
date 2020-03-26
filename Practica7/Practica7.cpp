#include<stdio.h>
#include<stdlib.h>

int i,numb,limm;
int main()
{
	printf("\n Ingresa el numero a usar como base:",numb);
	scanf("%d",&numb);
	printf("\n Ingresa el numero que sera el limite de los multiplos",limm);
	scanf("%d",&limm);
	
	int num[limm];
	for(i=0;i<limm;i++)
	{
		num[1]=numb*(i+1);
	}
	
	printf("\n Numeros multiplos de la base '%d' \n",numb);
	for(i=0;i<limm;i++)
	{
		printf("%d \n",num[i]);
	}
	printf(" \n \n");
	system("pause");
	return 0;
}

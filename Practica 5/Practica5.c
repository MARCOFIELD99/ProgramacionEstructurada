#include<stdio.h>
#include<stdlib.h>

	int n=0,a=0,i=0;
	float b=0;
int main()
{

	printf("Ingresa un numero entero: \n",n);
	scanf("%d",&n);
	while(n>=0)
	{
		a=a+n;
		i=i+1;
		printf("Ingresa un numero entero: \n",n);
		scanf("%d",&n);
	}
	printf("%d,%d",a,i);
	b=a/i;
	printf("El promedio de numeros es de: %.2f \n",b);
	printf("\n\n");
	system("pause");
	return 0;
}

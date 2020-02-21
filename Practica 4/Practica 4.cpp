#include <stdio.h>

/*Calculadora*/
float val_1, val_2,sum,res,mul,div;
char car;
int main()
{
printf("Ingresa el primer valor \n",val_1);
scanf("%f", &val_1);_flushall();
printf("Ingresa el segundo valor \n",val_2);
scanf("%f", &val_2);_flushall();
printf("Ingresa la operacion +, -, *, /: \n",car);
scanf("%c", &car);

switch (car)
{
	case '+':
	sum=val_1+val_2;
	printf("El resultado es %.2f",sum);
	break;
	
	case '-':
	res=val_1-val_2;
	printf("El resultado es %.2f",res);
	break;
	
	case '*':
	mul=val_1*val_2;
	printf("El resultado es %.2f",mul);
	break;
	
	case '/':
	div=val_1/val_2;
	printf("El resultado es %.2f",div);
	break;
	
	default:
	printf("Operacion invalida");
}	
	return 0;
}

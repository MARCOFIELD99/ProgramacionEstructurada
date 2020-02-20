
#include <stdio.h>
#include <stdbool.h>

char ab, bc;
int a,b,sum,res,mult,div,mod,aum1,decre1,aum2,decre2,ma,me,igu,maig,meig;
float c,d,sumf,resf,multf,divf;

 int main()
{
	printf("Introduce los valores: \n");
	printf("Introduce el valor a \n",a);
	scanf("%d", &a);
	printf("Introduce el valor b \n",b);
	scanf("%d", &b);
	/*Enteros*/
	sum= a+b;
	res= a-b;
	mult= a*b;
	div= a/b;
	mod= a%b;
	aum1= ++a;
	decre1= --a;
	aum2= ++b;
	decre2= --b;
	printf("La suma es:%d \n", sum);
	printf("La resta es:%d \n", res);
	printf("La multiplicacion es:%d \n", mult);
	printf("La division es: %d \n", div);
	printf("El modulo es: %d \n", mod);
	printf("El aumento de a es: %d \n", aum1);
	printf("La a decrece: %d \n", decre1);
	printf("El aumento de b es: %d \n", decre2);
	printf("La b decrece: %d \n", decre2);
	
	/*Flotantes*/
	printf("Introduce los valores flotantes: \n");
	printf("Introduce la variable c: \n",c);
	scanf("%f",&c);
	printf("Introduce la variable d: \n",d);
	scanf("%f",&d);
	sumf= c+d;
	resf= c-d;
	multf=c*d;
	divf=c/d;
	printf("La suma de flotantes es: %.2f \n", sumf);
	printf("La resta de flotantes es: %.2f \n", resf);
	printf("La multiplicacion de flotantes es: %.2f \n", multf);
	printf("La division de flotantes es: %.2f \n", divf);
	
	/*Desigualdades*/
	printf("0=Falso y 1=Verdadero \n");
	ma=a>b;
	me=a<b;
	igu=a==b;
	maig=a>=b;
	meig=a<=b;
	printf("La desigualdad a>b=%d \n",ma);
	printf("La desigualdad a<b=%d \n",me);
	printf("La desigualdad a==b=%d \n",igu);
	printf("La desigualdad a>=b=%d \n",maig);
	printf("La desigualdad a<=b=%d \n",meig);
	
	/*Booleano*/
	
int ab=5,bc=10;
	printf("0=Falso y 1=Verdadero \n");
	bool comparar = ab>=bc;
	printf("Resultado %d \n",comparar);
	return 0;
}

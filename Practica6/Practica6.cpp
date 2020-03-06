#include<stdio.h>
int num=0, i=-1,sum=0;
float prom=0;
int main(){
do{
	sum+=num;
	i=i+1;
	printf("Ingresa el numero \n");
	scanf("%d", &num);
	}while(num>=0);
	if(i==0){
	i=1;
}
prom=sum/i;
printf("El promedio es %.2f \n ",prom);
	return 0;
}

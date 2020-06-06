#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>


struct date
{
	unsigned int dia, mes, anu;
};

struct Estu
{
	int mat;
	char nom[50];
	char gen[2];
	struct date cumple;
	char facu[10];
	char car[10];
	int sem;
	
}alum[10];

int main()
{
	int i;
	for(i=0;i<10;i++)
	{
	
		do
		{
						
			printf("Ingrese la matricula del estudiante %d; \n",(i+1));
			fflush(stdin);
			scanf("%d",&alum[i].mat);
			
			if(alum[i].mat<0);
				printf("Matricula incorrecta \n");
		}
		while(alum[i].mat<0);
						
		printf("Ingrese su nombre %d:\n",(i+1));
		fflush(stdin);
		gets(alum[i].nom);
		
		
		printf("Ingrese su genero %d\n",(i+1));
		printf("F (femenino) o M(masculino)");
		gets(alum[i].gen);
		
		do
		{
			printf("Ingrese su dia de nacimiento  %d:\n",(i+1));
			scanf("%d", &alum[i].cumple.dia);
			if(alum[i].cumple.dia<1||alum[i].cumple.dia>31)
				printf("Dato incorrecto\n");
								
		}
		while(alum[i].cumple.dia<1||alum[i].cumple.dia>31);
			
		do
		{
			printf("Ingrese su mes de nacimiento  %d:\n",(i+1));
			scanf("%d", &alum[i].cumple.mes);
			if(alum[i].cumple.mes<1||alum[i].cumple.mes>12)
				printf("Dato incorrecto\n");
								
		}
		while(alum[i].cumple.mes<1||alum[i].cumple.mes>12);
						
		do
		{
			printf("Ingrese su año de nacimiento %d:\n",(i+1));
			scanf("%d", &alum[i].cumple.anu);
			if(alum[i].cumple.anu<1995||alum[i].cumple.anu>2020)
				printf("Fecha no valida,Fechas disponibles del a%co 1995 a la actualidad\n");
							
		}
		while(alum[i].cumple.anu<1);
						
		printf("Ingrese la abreviacion de su facultad %d:\n",(i+1));
		fflush(stdin);
		gets(alum[i].facu);
		
		
		printf("Ingrese la abreviacion de su carrera %d:\n",(i+1));
		scanf("%s",&alum[i].car);
		
		
		do
		{
			printf("Ingrese su semestre %d:\n",(i+1));
			scanf("%d", &alum[i].sem);
			
			if(alum[i].sem<1||alum[i].sem>10)
				printf("Semestre no valido \n");
		}
		while(alum[i].sem<1||alum[i].sem>10);
			
	}
	
	system("cls");
	
	printf("\n\n\t Estudiantes \n\n");
							
	printf("Id\t\tNombre\t\t\t\t\tGenero\t\tCumpleaños\tFacultad\tCarrera\tSemestre\n");
								
	for	(i=0;i<10;i++){
			printf("%-8ld\t",alum[i].mat);
			printf("%-20s\t\t",alum[i].nom);
			printf("\t%-2s\t",alum[i].gen);
			printf("\t%2d/%2d/%6d",alum[i].cumple.dia,alum[i].cumple.mes,alum[i].cumple.anu);
			printf("\t%6s",alum[i].facu);
			printf("\t%5s",alum[i].car);
			printf("\t%3d\n",alum[i].sem);
		}

	system("pause");
	return	0;
}

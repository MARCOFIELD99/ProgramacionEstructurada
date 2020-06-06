#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char A[10][6];
    int i,j,est;

printf("Ingresa el numero de estudiantes \n");
scanf("%d",&est);
   for(i=0;i<est;i++)
   {
   	
           printf ("Ingrese la matricula del estudiante: ");
           scanf ("%d",&A[i][1] );
           printf ("Ingrese el nombre del estudiante: ");
           scanf ("%s",&A[i][2] );
            printf ("Ingrese los apellidos del estudiante: " );
           scanf ("%s",&A[i][3] );
            printf ("Ingrese el nombre de la escuela: ");
           scanf ("%s",&A[i][4] );
            printf ("Ingrese el nombre de la carrera: " );
           scanf ("%s",&A[i][5] );
           printf ("Ingrese el nombre del genero: " );
           scanf ("%s",&A[i][6] );
     printf("\n\n");   
    }
printf("Matricula\t\tNombre\t\tApellido\t\tEscuela\t\tCarrera\t\tGenero");
for(i=0;i<10;i++)
   {
       
          printf("%d\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n", A[i][1],A[i][2],A[i][3],A[i][4],A[i][5],A[i][6]);
    }
 system("pause");
 return 0;
 }

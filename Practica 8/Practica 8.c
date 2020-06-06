#include <stdio.h>
#include <stdlib.h>

int i,j,A[3][3];
float N;
int main()
{
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Ingresa el numero de la casilla [%d][%d]:",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nIngresa el valor de la escalar por el que desea multiplicar la matriz: ");
    scanf("%f",&N);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            A[i][j]=A[i][j]*N;
        }
    }
    printf("\nLa matriz multiplicada por %.3f es:\n\n",N);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}

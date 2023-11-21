/*Cree una matriz cuya dimensiones sean ingresadas por el usuario.
La matriz puede tener cualquier dimension
Inicialice toda la matriz en ceros
Imprima la matriz con la diagonal principal con valores de 1*/

#include <stdio.h>

int main()
{
    int n, m;
    printf("Ingrese el numero de filas -> ");
    scanf("%d", &n);
    printf("Ingrese el numero de columnas -> ");
    scanf("%d", &m);

    int matrix [n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j]=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        matrix[i][i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
        printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

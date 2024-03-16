#include <stdio.h>
#include <stdlib.h>
// Задано матрицю цілих чисел A[m][n].
// При обході матриці по стовпчиках знайти в ній перший від’ємний елемент і його місцезнаходження (координати).

int main()
{
    int m,n;
    printf("IN matrix size [m][n]:\n");
    scanf("%d%d", &m,&n);
    int a[m+1][n];
    if(m>=0 && n>=0)
    {
        printf("IN matrix a\n");//in
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                a[i][j]=j++;

        for(int j=0; j<n; j++)//in last line
            a[m][j]=-1;

        printf("OUT matrix a\n");//out
        for(int i=0; i<=m; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }

        for(int j=0; j<n; j++)
        {
            int i=0;

            while( a[i][j] >= 0)
                i++;

            if(i<m)
                printf("Index finded first negative value [%d][%d] = %d\n",i,j,a[i][j]);//out incorrect
            else
                printf("Column %d matrix <a> doesn't have negative value\n",j);

        }
    }
    else
    {
        printf("Incorrect matrix size <m> and <n>\n");
    }


    return 0;
}

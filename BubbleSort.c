//Bubble Sort Program in C language
#include<stdio.h>
#include<stdlib.h>
int main(){

    int a[] = {12,7,9,1,14,6};

    int i, j, k, temp;

    system("cls");

    printf("Array before Sorting\n");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }   
        }   
    }

        printf("\nArray after Sorting\n");
        for (k = 0; k < 6; k++)
        {
            printf("%d ", a[k]);
        }

    return 0;
}
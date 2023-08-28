#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selectionsort(int *a, int n)
{
    int indexOfMin, temp;
    printf("Running Selection sort...\n");
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = a[i];
        a[i] = a[indexOfMin];
        a[indexOfMin] = temp;
    }
}
int main(int argc, char const *argv[])
{
    int a[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(a, n);
    selectionsort(a, n);
    printArray(a, n);
    getch();
    return 0;
}
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
void insertionsort(int *a, int n)
{
    int key, j;
    for (int i = 0; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
int main(int argc, char const *argv[])
{
    int a[] = {12, 54, 56, 7, 3, 65};
    int n = 6;
    printArray(a,n);
    insertionsort(a,n);
    printArray(a,n);
    getch();
    return 0;
}
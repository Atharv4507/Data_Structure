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
void bubblesort(int *a, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int a[] = {12, 45, 65, 7, 23, 9};
    int n = 6;
    printArray(a, n); // printing the array before sorting
    bubblesort(a, n); // sorting array
    printArray(a, n); // printing the array after sorting
    getch();
    return 0;
}
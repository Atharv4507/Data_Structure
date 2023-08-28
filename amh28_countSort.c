#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <limits.h>
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int maximum(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
void countSort(int *a, int n)
{
    int i, j;
    int max = maximum(a, n);
    int *count = (int *)malloc((max + 1) * sizeof(int));
    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[a[i]] = count[a[i]] + 1;
    }
    i = 0;
    j = 0;

    while (i <= max)
    {
        if (count[i] > 0)
        {
            a[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}
int main(int argc, char const *argv[])
{
    int a[] = {9, 14, 4, 8, 7, 5, 6};
    int n = 7;
    printArray(a, n);
    countSort(a, n);
    printf("Running Merge count...\n");
    printArray(a, n);
    getch();
    return 0;
}
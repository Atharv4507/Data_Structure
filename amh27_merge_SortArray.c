#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// errror code!
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void merge(int a[], int b[], int c[], int m, int n)
{
    int i, j, k;
    i = j = k = 0;
    
    while (i <= m && j <= n)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= n)
    {
        c[k] = b[j];
        k++;
        j++;
    }
    for (int i = 0; i <= m+n; i++)
    {
        a[i] = b[i];
    }
}

// void mergesort(int a[], int low, int high)
// {
//     int mid;
//     if (low < high)
//     {
//         mid = (low + high) / 2;
//         mergesort(a, low, mid);
//         mergesort(a, mid + 1, high);
//         merge(a, mid, low, high);
//     }
// }

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5,6};
    int b[] = {7,8,9,11,13,14};
    // int c[] = a[] + b[];
    int n = 6;
    printArray(a, n);
    merge(a, b, 6, 6);
    printf("Running Merge sort...\n");
    printArray(a, n);
    getch();
    return 0;
}
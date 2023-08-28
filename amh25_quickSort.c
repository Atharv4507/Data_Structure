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

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    // swap a[low] && a[high];
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void qicksort(int a[], int low, int high)
{
    int partitionindex;

    if (low < high)
    {
        partitionindex = partition(a, low, high);
        qicksort(a, low, partitionindex - 1);  // sort left subarray
        qicksort(a, partitionindex + 1, high); // sort right subarray
    }
}
int main(int argc, char const *argv[])
{
    int a[] = {3, 5, 2, 13, 12, 9, 13, 2, 45};
    int n = 9;
    printArray(a, n);
    qicksort(a, 0, n - 1);
    printf("Running Quick sort...\n");
    printArray(a, n);
    getch();
    return 0;
}
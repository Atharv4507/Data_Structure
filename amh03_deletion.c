#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void display(int arr[], int n)
{
    // Transversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sortedDelition(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main(int argc, char const *argv[])
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 4;  // you can delet by changing index
    display(arr, size);
    sortedDelition(arr, size, index);
    size -= 1;
    display(arr, size);
    getch();
    return 0;
}
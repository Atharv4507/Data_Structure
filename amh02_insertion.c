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

int sortedinsertion(int arr[] , int size , int element , int capacity , int index)
{
    if (size>=capacity)
    {
        return -1;
    }
    for (int i = size -1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main(int argc, char const *argv[])
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5 , element  = 45 , index = 3;
    display(arr, size);
    sortedinsertion(arr, size , element ,100, index);
    size += 1;
    display(arr , size);
    getch();
    return 0;
}
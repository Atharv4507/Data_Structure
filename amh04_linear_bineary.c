#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binearysearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    // usorted array for linear search
    // int arr[] = {1,3,5,56,64,73,5,4,24,444}
    // int size = sizeof(arr)/sizeof(int);
    // int searchindex = linearsearch(arr , size , element);

    // sorted array for bineary search
    int arr[] = {1, 3, 5, 56, 64, 73, 123, 225, 444};
    int size = sizeof(arr) / sizeof(int);
    int element = 444;
    int searchindex = binearysearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchindex);

    getch();
    return 0;
}
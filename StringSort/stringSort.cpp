#include <stdio.h>

// Bubble Sort
void bubbleSort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j];
                array[j + 1] = tmp;
            }
        }
    }
}

// Selection Sort
void selectionSort(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if(array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        int tmp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = tmp;
    }
}

void insertionSort(int array[], int n){
    for(int i = 1; i < n; i++){
        int key = array[i];
        int j = i - 1;
    }
}

void printArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Original array: \n");
    printArray(array, n);

    bubbleSort(array, n);
    printf("Sorted array via Bubble Sort: \n");
    printArray(array, n);

    int array2[] = {64, 34, 25, 12, 22, 11, 90};
    selectionSort(array2, n);
    printf("Sorted array via Selection Sort: \n");
    printArray(array2, n);

    int array3[] = {64, 34, 25, 12, 22, 11, 90};
    insertionSort(array3, n);
    printf("Sorted array via Insertion Sort: \n");
    printArray(array3, n);

    return 0;
}
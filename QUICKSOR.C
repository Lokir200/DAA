#include <stdio.h>
#include<conio.h>
#include<time.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];   // Pivot = last element
    int i = low;
    int j = high - 1;

    while (1)
    {
	while (i <= j && arr[i] < pivot)
	    i++;

	while (i <= j && arr[j] > pivot)
	    j--;

	if (i >= j)
	    break;

	swap(&arr[i], &arr[j]);
	i++;
	j--;
    }

    swap(&arr[i], &arr[high]);
    return i;
}


void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
	int pIndex = partition(arr, low, high);

	quickSort(arr, low, pIndex - 1);
	quickSort(arr, pIndex + 1, high);
    }
}

void main()
{
    int arr[100], n, i;
    clrscr();
    srand(time(NULL));
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
     arr[i]=rand()%100;
     printf("%d ",arr[i]);
     }

    quickSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
	printf("%d ", arr[i]);

    getch();
}
#include <stdio.h>
#include<conio.h>
#include<time.h>
#define MAX 100

int temp[MAX];

void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
	if (arr[i] < arr[j])
	{
	    temp[k] = arr[i];
	    i++;
	}
	else
	{
	    temp[k] = arr[j];
	    j++;
	}
	k++;
    }

    while (i <= mid)
    {
	temp[k] = arr[i];
	i++;
	k++;
    }

    while (j <= high)
    {
	temp[k] = arr[j];
	j++;
	k++;
    }

    for (i = low; i <= high; i++)
    {
	arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
	int mid = (low + high) / 2;

	mergeSort(arr, low, mid);
	mergeSort(arr, mid + 1, high);
	merge(arr, low, mid, high);
    }
}

void main()
{
    int arr[MAX], n, i;
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

    mergeSort(arr, 0, n - 1);

    printf("\nSorted array:\n");
    for (i = 0; i < n; i++)
    {
	printf("%d ", arr[i]);
    }

    getch();
}
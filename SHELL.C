#include <stdio.h>
#include<conio.h>
#include<time.h>

void shellSort(int arr[], int n)
{
    int gap, i, j, temp;

    for (gap = n / 2; gap > 0; gap = gap / 2)
    {
	for (i = gap; i < n; i++)
	{
	    for (j = i - gap; j >= 0; j = j - gap)
	    {
		if (arr[j + gap] >= arr[j])
		    break;
		else
		{
		    temp = arr[j];
		    arr[j] = arr[j + gap];
		    arr[j + gap] = temp;
		}
	    }
	}
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

    shellSort(arr, n);

    printf("\nSorted array:\n");
    for (i = 0; i < n; i++)
    {
	printf("%d ", arr[i]);
    }

    getch();
}
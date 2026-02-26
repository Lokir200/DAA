#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int min, max;

void findMinMax(int arr[], int n)
{
    if (n == 1)
    {
        min = arr[0];
        max = arr[0];
        return;
    }

    findMinMax(arr, n - 1);

    if (arr[n - 1] < min)
        min = arr[n - 1];

    if (arr[n - 1] > max)
        max = arr[n - 1];
}

void main()
{
    int arr[100], n, i;

    clrscr();
    printf("Enter size: ");
    scanf("%d", &n);

    srand(time(0));

    printf("Generated Array:\n");
    for (i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }

    findMinMax(arr, n);

    printf("\nMinimum = %d", min);
    printf("\nMaximum = %d", max);

    getch();
}

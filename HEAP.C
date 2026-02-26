#include <stdio.h>
#include <conio.h>

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] > arr[largest])
        largest = left;
    if(right < n && arr[right] > arr[largest])
        largest = right;

    if(largest != i) {
	int temp = arr[i];
	arr[i] = arr[largest];
	arr[largest] = temp;
	heapify(arr, n, largest);
    }
}

int main() {
    int n, i;
    int arr[50];
    clrscr();
    printf("Enter number of elements: ");
    scanf("%d", &n);


    printf("Enter %d elements: ", n);
    for(i=0; i<n; i++)
	scanf("%d", &arr[i]);

    for(i=n/2-1; i>=0; i--)
	heapify(arr, n, i);


    for(i=n-1; i>0; i--) {
	int temp = arr[0];
	arr[0] = arr[i];
	arr[i] = temp;
	heapify(arr, i, 0);
    }

    printf("Sorted array: ");
    for(i=0; i<n; i++)
	printf("%d ", arr[i]);

    getch();
    return 0;
}

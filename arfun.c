#include <stdio.h>

// Function Prototypes
void readArray(int arr[], int n);
int findLargest(int arr[], int n);
int findSecondLargest(int arr[], int n);
int isSorted(int arr[], int n);
int removeDuplicates(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    int n, arr[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    readArray(arr, n);

    printf("Largest element: %d\n", findLargest(arr, n));
    printf("Second Largest element: %d\n", findSecondLargest(arr, n));

    if (isSorted(arr, n))
        printf("Array is sorted in ascending order\n");
    else
        printf("Array is NOT sorted\n");

    n = removeDuplicates(arr, n);
    printf("Array after removing duplicates:\n");
    printArray(arr, n);

    return 0;
}

void readArray(int arr[], int n) {
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

int findLargest(int arr[], int n) {
    int max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}

int findSecondLargest(int arr[], int n) {
    int max = findLargest(arr, n);
    int second = -99999;

    for(int i = 0; i < n; i++)
        if(arr[i] > second && arr[i] < max)
            second = arr[i];

    return second;
}

int isSorted(int arr[], int n) {
    for(int i = 0; i < n-1; i++)
        if(arr[i] > arr[i+1])
            return 0;
    return 1;
}

int removeDuplicates(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                for(int k = j; k < n-1; k++)
                    arr[k] = arr[k+1];
                n--;
                j--;
            }
        }
    }
    return n;
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
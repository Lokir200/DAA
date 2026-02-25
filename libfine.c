#include <stdio.h>

int calculateFine(int days) {
    int fine = 0;

    if(days <= 5)
        fine = 0;
    else if(days <= 10)
        fine = (days - 5) * 5;
    else
        fine = (5 * 5) + (days - 10) * 10;

    return fine;
}

int main() {
    int days;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    printf("Total Fine: ₹%d\n", calculateFine(days));

    return 0;
}
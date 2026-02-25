#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    while(num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

int rotateRight(int num) {
    int digits = countDigits(num);
    int lastDigit = num % 10;
    num = num / 10;

    int rotated = lastDigit * pow(10, digits - 1) + num;
    return rotated;
}

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("After one right rotation: %d\n", rotateRight(num));

    return 0;
}
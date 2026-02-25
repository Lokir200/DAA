#include <stdio.h>

int sumOfSquares(int num) {
    int sum = 0;
    while(num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

int isHappy(int num) {
    int slow = num, fast = num;

    do {
        slow = sumOfSquares(slow);
        fast = sumOfSquares(sumOfSquares(fast));
    } while(slow != fast);

    return slow == 1;
}

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if(isHappy(num))
        printf("It is a Happy Number\n");
    else
        printf("It is NOT a Happy Number\n");

    return 0;
}
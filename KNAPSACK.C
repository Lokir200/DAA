#include <stdio.h>
#include <conio.h>

#define MAX 50
#define MAXW 100

int main() {
    int n, W;
    int wt[MAX], val[MAX];
    int dp[MAX+1][MAXW+1];
    int i, j;

    clrscr();

    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter weights:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &wt[i]);

    printf("Enter values:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &val[i]);

    printf("Enter capacity: ");
    scanf("%d", &W);

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= W; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (wt[i-1] <= j) {
                int include = val[i-1] + dp[i-1][j - wt[i-1]];
                int exclude = dp[i-1][j];
                dp[i][j] = (include > exclude) ? include : exclude;
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    printf("Maximum Profit = %d\n", dp[n][W]);

    getch();  // wait for key press before closing
    return 0;
}

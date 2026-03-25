#include <stdio.h>

int main() {
    int coins[] = {1,2,5};
    int amount = 11;
    int dp[12];

    for(int i=0;i<=amount;i++)
        dp[i]=1000;

    dp[0]=0;

    for(int i=1;i<=amount;i++) {
        for(int j=0;j<3;j++) {
            if(coins[j]<=i && dp[i-coins[j]]+1 < dp[i])
                dp[i] = dp[i-coins[j]] + 1;
        }
    }

    printf("Minimum coins = %d",dp[amount]);
}
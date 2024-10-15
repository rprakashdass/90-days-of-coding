#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void coinDenominations(const vector<int> &coins, int n) {
    vector<int> dp(n + 1, INT_MAX);
    vector<int> denom(n + 1, -1);

    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int coin : coins) {
            if (i >= coin && dp[i - coin] != INT_MAX) {
                if (dp[i] > dp[i - coin] + 1) {
                    dp[i] = dp[i - coin] + 1;
                    denom[i] = coin;
                }
            }
        }
    }

    vector<int> coinsUsed;

    while (n > 0) {
        coinsUsed.insert(coinsUsed.begin(), denom[n]);
        n -= denom[n];
    }
    
    for(int a : coinsUsed){
        cout << a << " ";
    }
    
    cout << endl;
    
}

int main() {
    int t;
    cin >> t;

    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 1000};

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        coinDenominations(coins, n);
    }

    return 0;
}

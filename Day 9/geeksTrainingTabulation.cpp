class Solution {
public:
    int maximumPoints(vector<vector<int>>& arr, int n) {
        int nt = arr[0].size();
        vector<vector<int>> dp(n, vector<int>(nt, 0));
        
        for (int task = 0; task < nt; task++) {
            dp[0][task] = arr[0][task];
        }
        
        for (int day = 1; day < n; day++) {
            for (int task = 0; task < nt; task++) {
                int maxPoints = 0;
                for (int last = 0; last < nt; last++) {
                    if (last != task) {
                        maxPoints = max(maxPoints, dp[day - 1][last]);
                    }
                }
                dp[day][task] = arr[day][task] + maxPoints;
            }
        }
        
        int result = 0;
        for (int task = 0; task < nt; task++) {
            result = max(result, dp[n - 1][task]);
        }
        
        return result;
    }
};

// using memoization

class Solution {
    private: 
        int recur( int day, int last, int n, int nt, vector<vector<int>>& arr, vector<vector<int>>& dp)
        {
            int maxi = 0;
            if(day == 0){
                for(int i = 0;i < nt;i++){
                    if(i != last){
                        maxi = max(maxi, arr[0][i]);
                    }
                }
                return maxi;
            }
            
            if ( dp[day][last] != -1 ) return dp[day][last];
            
            for(int i = 0;i < nt;i++)
            {
                if(i != last){
                    maxi = max(maxi, arr[day][i] + recur(day-1, i, n, nt, arr, dp));
                }
            }
            
            return dp[day][last] = maxi;
        }
        
  public:
    int maximumPoints(vector<vector<int>>& arr, int n) {
        // Code here
        int nt = arr[0].size();
        vector<vector <int>> dp(n, vector<int>(n+1, -1));
        return recur(n-1, nt, n, nt, arr, dp);
    }
};

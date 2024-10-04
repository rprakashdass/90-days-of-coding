/*
@GeeksforGeeks:
Time (IST)	          Status	                Lang	  Test Cases
2024-10-04 07:19:55	  Time Limit Exceeded	    cpp	     10 / 1115
*/

class Solution {
    private: 
        int recur( int day, int last, int n, int nt, vector<vector<int>>& arr)
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
            for(int i = 0;i < nt;i++)
            {
                if(i != last){
                    maxi = max(maxi, arr[day][i] + recur(day-1, i, n, nt, arr));
                }
            }
            return maxi;
        }
        
  public:
    int maximumPoints(vector<vector<int>>& arr, int n) {
        // Code here
        int nt = arr[0].size();
        recur(n-1, nt, n, nt, arr);
    }
};


class Solution {
public:
    int maximumPoints(vector<vector<int>>& arr, int n) {
        int nt = arr[0].size();
        vector<int> ar(nt, 0);
        
        for (int task = 0; task < nt; task++) {
            ar[task] = arr[0][task];
        }
        
        
        for (int day = 1; day < n; day++) {
            vector<int> temp(nt, 0);
            
            for (int task = 0; task < nt; task++) {
                int maxPoints = 0;
                
                for (int last = 0; last < nt; last++) {
                    if (last != task) {
                        maxPoints = max(maxPoints, ar[last]);
                    }
                }
                
                temp[task] = maxPoints + arr[day][task];
                
            }
            ar = temp;
        }
        
        int result = 0;
        for (int task = 0; task < nt; task++) {
            result = max(result, ar[task]);
        }
        
        return result;
    }
};


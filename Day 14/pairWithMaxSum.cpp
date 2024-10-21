class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
        
        int n = arr.size();
        if(n < 2) return -1;

        int result = arr[0] + arr[1];

        for(int i = 1;i < n-1;i++) {
            result = max(result, arr[i]+arr[i+1]);
        }

        return result;
    }
};

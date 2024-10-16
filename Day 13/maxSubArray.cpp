class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        if(n == 1) return nums[0];

        int maxm = INT_MIN;

        for(int i = 0;i < n;i++) {
            for(int j = i;j < n;j++) {
                int sum = 0;
                for(int k = i;k <= j;k++) {
                    sum += nums[k];
                }
                maxm = max(maxm, sum);
            }
        }
        return maxm;
    }
};

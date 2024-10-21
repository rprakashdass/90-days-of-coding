long long maxSubarraySum(vector<int> nums, int n)

{
    // Write your code here.

    long long maxm = LONG_MIN;
    long long sum = 0;

    for(int i = 0;i < n;i++) {
        sum = sum+nums[i];
        maxm = max(maxm, sum);
        if(sum < 0) {
            sum = 0;
        }
    }
    
    return (maxm >= 0) ? maxm : 0;

}

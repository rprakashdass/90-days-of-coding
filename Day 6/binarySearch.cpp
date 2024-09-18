class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) {

        // Your code here
        int left = 0, right = N-1;
        int mid = 0;
        for(int i = 0;i < N;i++){
            mid = ( left + right ) / 2;
            if(K == arr[mid])
                return 1;
            else if(K > arr[mid])
                left = mid+1;
            else if(K < arr[mid])
                right = mid;
        }
        return -1;
    }
};

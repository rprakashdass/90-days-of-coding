class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i = 0, j = 0;
        vector<int> res;
        while(i < n && j < m)
        {
            if(i > 0 && j > 0 && arr1[i] == arr1[i-1] || arr2[j] == arr2[j-1]){
                continue;
            }
            if(arr1[i] == arr2[j]){
                res.push_back(arr1[i]);
                i++;j++;
            } else if (arr1[i] < arr2[j]){
                res.push_back(arr1[i]);
                i++;
            } else if (arr2[j] < arr1[i]){
                res.push_back(arr2[j]);
                j++;
            }
        }
        while (i < n){
            res.push_back(arr1[i]);
            i++;
        }
        while (j < m){
            res.push_back(arr2[j]);
            j++;
        }
        return res;
    }
};

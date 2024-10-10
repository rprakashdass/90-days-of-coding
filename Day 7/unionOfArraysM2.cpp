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
        set<int> res;
        while(i < n && j < m)
        {
            if(arr1[i] == arr2[j]){
                res.insert(arr1[i]);
                i++;j++;
            } else if (arr1[i] < arr2[j]){
                res.insert(arr1[i]);
                i++;
            } else if (arr2[j] < arr1[i]){
                res.insert(arr2[j]);
                j++;
            }
        }
        while (i < n){
            res.insert(arr1[i]);
            i++;
        }
        while (j < m){
            res.insert(arr2[j]);
            j++;
        }
        vector<int> unio;
        unio.assign(res.begin(), res.end());
        return unio;
    }
};

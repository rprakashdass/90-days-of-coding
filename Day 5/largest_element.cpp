class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int lar = arr[0], sec_lar = -1;
        for(int i=1;i<arr.size();i++){ 
            if(arr[i] > lar) {
                sec_lar = lar;
                lar = arr[i];
            }
            if(arr[i] != lar && arr[i] > sec_lar){
                sec_lar = arr[i];
            }
        }
        return sec_lar;
    }
};

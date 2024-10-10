class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count = 0;
        int n = N;
        while(N > 0){
            int d = (N%10);
            if(d != 0 && n % d == 0) count++;
            N /= 10;
        }
        return count;
    }
};

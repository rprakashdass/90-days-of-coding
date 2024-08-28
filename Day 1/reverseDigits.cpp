class solution{
{
	public:
		long long int reverse_digit(long long int x)
		{
		    // Code here
            long long int res = 0;
            while(x > 0){
                res = (res * 10) + (x % 10);
                x /= 10;
            }
            return res;
    	}
};

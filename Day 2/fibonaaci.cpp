/******************************************************************************

Write a program in C++ to print the Fibonacci series of the nth term using the constructor.

*******************************************************************************/
#include <iostream>
#include <vector>

class Fibonaaci{
public:
    Fibonacci(int n){
        std::vector<int> dp(n+1);
        dp[0] = 0, dp[1] = 1;
        for(int i = 2;i <= n;i++)
            dp[i] = dp[i-1] + dp[i-2];
        std::cout << dp[n];
    }
};
int main()
{
    Fibonaaci(4);
    return 0;
}

/*
OUTPUT: o(N)
3
*/

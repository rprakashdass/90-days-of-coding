/******************************************************************************

Write a program to convert decimal numbers into binary numbers using a constructor.
Input : n=100
Output : binary number = 1100100

*******************************************************************************/
#include <iostream>

class BinaryToDecimal{
    int n;
public:
    BinaryToDecimal(int n){
        int bn = 0, place = 1;
        for(int i = n; i > 0;i/=2){
            bn += (i % 2) * place;
            place *= 10;
        }
        std::cout << "Decimal Number is " << bn;
    }
};

int main()
{
    BinaryToDecimal(100);
    return 0;
}

/*
OUTPUT: - O(log n)
Decimal Number is 1100100
*/

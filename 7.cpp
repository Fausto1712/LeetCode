#include <iostream>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        if (x >= 1534236469 || x<= -2147483413)
        {
            return 0;
        }
        
        string num,num2;
        num = to_string(x);
        for (int i = 0; i < num.length(); i++)
        {
            num2 = num[i] + num2;
        }
        if (x < 0)
        {
            x = stol(num2);
            x = x * -1;
        } else {
            x = stol(num2);
        }
        return x;
    }
};
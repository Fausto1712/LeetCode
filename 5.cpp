#include <iostream>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string longest;
        int st,size, max = 0,left,right;
        for (int i = 0; i < s.size(); i++)
        {
            int x = 1;
            if (s[i] == s[i + 1])
            {
                size = 2;
                while (((i-x) >= 0) && ((i+x) <= s.size()) && (s[i - x] == s[i + 1 + x]))
                {
                    size = size + 2;
                    x++;
                }
                if (size > max)
                {
                    max = size;
                    st = i+1-x;
                }
            }
            size = 1;
            x = 1;
            while (((i-x) >= 0) && ((i+x) <= s.size()) && (s[i - x] == s[i + x]))
            {
                size = size + 2;
                x++;
            }
            if (size > max)
            {
                max = size;
                st = i+1-x;
            }
        }
        return s.substr(st, max);
    }
};

int main(){
    string test =  "aaaa";
    //cin >> test;
    Solution s1;
    cout << s1.longestPalindrome(test);
}
#include <iostream>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0,end = 0,size = 0,x = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == s[i-1] || s[i] == s[i+1])
            {
                size = 2;
                x = 1;
                if (s[i] == s[i-1])
                {
                    while (s[i+x] == s[i-x-1])
                    {
                        size = size + 2;
                        x++;
                    }
                    end = i+x;
                    start = i-x-1;
                } else if (s[i] == s[i+1])
                {
                    while (s[i-x] == s[i+x+1])
                    {
                        size = size + 2;
                        x++;
                    }
                    start = i-x;
                    end = i+x+1;
                }
            }
            else if (s[i-1] == s[i+1])
            {
                size = 3;
                x = 2;
                while (s[i-x] == s[i+x])
                {
                    size = size + 2;
                    x++;
                }
                start = i-x;
                end = i+x;
            }
        }

        string result;
        while (start <= end)
        {
            result = result + s[start];
            start++;
        }
        cout << result << endl;
        return result;
    }
};

int main(){
    string test =  "akaaluhhula";
    //cin >> test;
    Solution s1;
    s1.longestPalindrome(test);
}
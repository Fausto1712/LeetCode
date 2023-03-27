#include <iostream>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int j = 0, i = 0;
        while (i < p.length())
        {
            if (p[i+1] == '*')
            {
                char cons;
                if ((p[i] == '.') && (p[i+2] == NULL))
                {
                    return true;
                } else if (p[i] == '.')
                {
                    i = i+2;
                    while (p[i] != s[j] && p[i] != '.')
                    {
                        if (j == s.length()-1)
                        {
                            return false;
                        }
                        j++;
                    }
                    
                } else{
                    cons = p[i];
                    i = i + 2;
                }
                while (s[j] == cons)
                {
                    if (j == s.length()-1)
                    {
                        return true;
                    }
                    j++;
                }
            } else if ((p[i] == '.') || (p[i] == s[j]))
            {
                j++;
                i++;
            } else
            {
                return false;
            }
            if ((j == s.length()) && (i == p.length()))
            {
                return true;
            }
        }
        return false;
    }
};

int main(){
    string s =  "abbbcd";
    string p =  "ab*bbbcd";
    Solution s1;
    cout << s1.isMatch(s,p);
}
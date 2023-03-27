#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        int count;
        map<char,int> parenthesis;
        parenthesis.insert(make_pair('[', 1));
        parenthesis.insert(make_pair(']', -1));
        parenthesis.insert(make_pair('{', 100));
        parenthesis.insert(make_pair('}', -100));
        parenthesis.insert(make_pair('(', 10000));
        parenthesis.insert(make_pair(')', -10000));
        for (int i = 0; i < s.length(); i++)
        {
            count = count + parenthesis[s[i]];
        }
        if (count == 0)
        {
            return true;
        } else{
            return false;
        }
        
    }
};
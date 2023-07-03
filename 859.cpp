#include <iostream>
#include <string>
#include <set>

using namespace std;

class Solution {

public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size())
        {
            return false;
        }
        
        if(s == goal){
            set<char> temp(s.begin(), s.end());
            return temp.size() < goal.size();
        }
        
        int counter = 0,l1,l2;
        for (size_t i = 0; i < s.length(); i++) {
            if (s[i] != goal[i])
            {
                counter++;
                l2 = l1;
                l1 = i;
            }
        }
        if (counter == 2 && ((s[l1] == goal[l2]) && (s[l2] == goal[l1])))
        {
            return true;
        }
        else {
            return false;
        }
        
        return false;
    }
};



int main(){
    string s1, s2;
    s1 = "abcaa";
    s2 = "abcbb";
    Solution Sol;
    cout << Sol.buddyStrings(s1,s2);
}
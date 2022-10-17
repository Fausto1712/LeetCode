#include <iostream>
#include <map>
#include <queue>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ran[26] = {0};
        int mag[26] = {0};
        for (int i = 0; i < magazine.length(); i++)
        {
            mag[(int)magazine[i]-97]++;
        }
        for (int j = 0; j < ransomNote.length(); j++)
        {
            ran[(int)ransomNote[j]-97]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (mag[i] < ran[i])
            {
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution s1;
    cout << s1.canConstruct("aa","ab") << endl;
    return 0;
}
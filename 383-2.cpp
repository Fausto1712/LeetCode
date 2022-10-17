#include <iostream>
#include <map>
#include <queue>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.length();
        int m=magazine.length();
        int c[26]={0};

        for(int i=0;i<m;i++){
            c[magazine[i]-'a']++;
        }
        
        for(int i=0;i<n;i++){
            c[ransomNote[i]-'a']--;
            if (c[ransomNote[i]-'a'] < 0)
            {
                return 0;
            }
        }
        return 1;
    }
};

int main(){
    Solution s1;
    cout << s1.canConstruct("aa","ab") << endl;
    return 0;
}
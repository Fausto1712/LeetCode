#include <iostream>
#include <map>
#include <queue>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int lenR = ransomNote.length();
        int lenM = magazine.length();
        if (lenR > lenM)
        {
            return false;
        } else {
            map<char,int> abc;
            abc.insert(make_pair('a', 1));
            abc.insert(make_pair('b', 2));
            abc.insert(make_pair('c', 3));
            abc.insert(make_pair('d', 4));
            abc.insert(make_pair('e', 5));
            abc.insert(make_pair('f', 6));
            abc.insert(make_pair('g', 7));
            abc.insert(make_pair('h', 8));
            abc.insert(make_pair('i', 9));
            abc.insert(make_pair('j', 10));
            abc.insert(make_pair('k', 11));
            abc.insert(make_pair('l', 12));
            abc.insert(make_pair('m', 13));
            abc.insert(make_pair('n', 14));
            abc.insert(make_pair('o', 15));
            abc.insert(make_pair('p', 16));
            abc.insert(make_pair('q', 17));
            abc.insert(make_pair('r', 18));
            abc.insert(make_pair('s', 19));
            abc.insert(make_pair('t', 20));
            abc.insert(make_pair('u', 21));
            abc.insert(make_pair('v', 22));
            abc.insert(make_pair('w', 23));
            abc.insert(make_pair('x', 24));
            abc.insert(make_pair('y', 25));
            abc.insert(make_pair('z', 26));

            priority_queue<int> M;
            priority_queue<int> N;
            for (int i = 0; i < lenM; i++)
            {
               M.push(abc[magazine[i]]);
            }
            
            for (int i = 0; i < lenR; i++)
            {
                N.push(abc[ransomNote[i]]);
            }

            while (!N.empty())
            {
                if (N.top() <= M.top())
                {
                    if (N.top() == M.top()){
                        N.pop();
                        M.pop();
                    } else {
                        while (N.top() < M.top() || N.size() > M.size())
                        {
                            M.pop();
                            if (M.empty())
                            {
                                return false;
                            }
                            
                        }
                    }
                } else {
                    return false;
                }
            }
            return true;
        }
    }
};

int main(){
    Solution s1;
    cout << s1.canConstruct("aa","ab") << endl;
    return 0;
}
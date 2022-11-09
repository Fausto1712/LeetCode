#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    void romanToInt(string s) {
        map<char,char> roman;
        roman.insert(make_pair('a', '|'));
        roman.insert(make_pair('b', '#'));
        roman.insert(make_pair('c', '%'));
        roman.insert(make_pair('d', '0'));
        roman.insert(make_pair('e', 'u'));
        roman.insert(make_pair('f', 'i'));
        roman.insert(make_pair('g', 'f'));
        roman.insert(make_pair('h', '&'));
        roman.insert(make_pair('i', '/'));
        roman.insert(make_pair('j', '='));
        roman.insert(make_pair('k', 't'));
        roman.insert(make_pair('l', '+'));
        roman.insert(make_pair('m', '`'));
        roman.insert(make_pair('n', '-'));
        roman.insert(make_pair('o', '_'));
        roman.insert(make_pair('p', 'x'));
        roman.insert(make_pair('q', 'o'));
        roman.insert(make_pair('r', 'p'));
        roman.insert(make_pair('s', '!'));
        roman.insert(make_pair('t', 'y'));
        roman.insert(make_pair('u', 'f'));
        roman.insert(make_pair('v', 'k'));
        roman.insert(make_pair('w', 'h'));
        roman.insert(make_pair('x', 'r'));
        roman.insert(make_pair('y', '{'));
        roman.insert(make_pair('z', '}'));
        roman.insert(make_pair(' ', '?'));

        int len = s.length();
        for (int i = 0; i < len;)
        {
            cout << roman[s[i]];
            i++;
        }
        cout << endl;
    }
};

int main (){
    Solution s1;
    string input;
    cin >> input;
    s1.romanToInt(input);
}
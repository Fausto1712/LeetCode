#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int t = 0,c = 0,q=0;
        vector<string> result;
        for (int i = 0; i < n; i++)
        {
            t++;
            c++;
            q++;
            if (q == 15)
            {
                result.push_back("FizzBuzz");
                q = 0;
                c = 0;
                t = 0;
            }else if (c == 5)
            {
                result.push_back("Buzz");
                c = 0;
            }else if (t == 3)
            {
                result.push_back("Fizz");
                t = 0;
            } else {
                result.push_back(to_string(i+1));
            }
        }
        return result;
    }

    void printVec(vector<string> numArray){
        for (int i = 0; i < numArray.size(); i++)
        {
            cout << numArray[i];
        }
        cout << endl;
    }
};

int main(){
    Solution s1;
    vector<string> numArray;
    numArray = s1.fizzBuzz(100);
    s1.printVec(numArray);

    return 0;
}
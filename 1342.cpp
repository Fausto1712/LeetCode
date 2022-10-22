#include <iostream>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;
        while (num != 0)
        {
            if (num % 2 == 0)
            {
                num = num / 2;
            } else
            {
                num--;
            }
            step++;
        }
        return step;
    }
};

int main(){
    Solution s1;
    cout << s1.numberOfSteps(123);
}
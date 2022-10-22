#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0,current;
        for (int i = 0; i < accounts.size(); i++)
        {
            current = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                current = current + accounts[i][j];
            }
            if (current > max)
            {
                max = current;
            }
        }
        return max;
    }
};
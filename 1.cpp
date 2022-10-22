#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int,int> index;
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target-nums[i];
            if ((index.find(diff) != index.end()) && (index.find(diff)->second != i))
            {
                result.push_back(i);
                result.push_back(index.find(diff)->second);
                return result;
            }
            index[nums[i]] = i;
        }
        return result;
    }
};
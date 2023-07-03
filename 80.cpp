#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        if(nums.size() > 2){
            for(int i = 1; i < nums.size()-1; i++){
                if(nums[i] == nums[i - 1] && nums[i+1] != nums[i - 1]){
                    nums[j] = nums[i];
                    j++;
                }
                else if(nums[i] != nums[i - 1]){
                    nums[j] = nums[i];
                    j++;
                }
            }
            nums[j] = nums[nums.size()-1];
            j++;
        } else {
            j = nums.size();
        }
        return j;
    }
};
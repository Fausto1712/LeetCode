#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int> nums1, vector<int> nums2) {
        double num1 = 0,num2 = 0;;
        int size1 = nums1.size(),size2 = nums2.size();
        int middle = (size1 + size2) / 2;
        int sobra = (size1 + size2) % 2;
        int n = 0,i = 0,j = 0;
        while (n < middle+1){
           if ((size2 == 0) || (j >= size2) || ((i < (size1)) && (nums1[i] <= nums2[j]))){
                num2 = num1;
                num1 = nums1[i];
                i++;
            } else {
                num2 = num1;
                num1 = nums2[j];
                j++;
            }
            n++;
        }
        if (sobra != 0){
            return num1;
        } else
        {
            return ((num1 + num2) / 2);
        }
    }
};

int main(){
    vector<int> v1;
    v1.push_back(100001);
    vector<int> v2;
    v2.push_back(100000);
    Solution s1;
    cout << s1.findMedianSortedArrays(v1,v2) << endl;
}
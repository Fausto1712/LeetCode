#include <iostream>
#include <queue>
#include <vector>

using namespace std;

class Solution {
    typedef pair<int, int> pi;
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pi, vector<pi>, greater<pi> > analize;
        vector<int> solution;
        int value;
        for (int i = 0; i < mat.size(); i++)
        {
            value = 0;
            for (int j = 0; j < mat[i].size(); j++)
            {
                if (mat[i][j] == 1)
                {
                    value++;
                }
            }
            analize.push(make_pair(value,i));
        }
        for (int i = 0; i < k; i++)
        {
            solution.push_back(analize.top().second);
            analize.pop();
        }
        return solution;
    }
};
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> rets;
        for(int i = 0;i < nums.size();i++) {
            for(int j = 0;j < nums.size();j++) {
                if(((nums[i] + nums[j]) == target) && (i != j)) {
                    rets.push_back(i);
                    rets.push_back(j);
                    return rets;
                }
            }
        }

        return vector<int>();
    }
};
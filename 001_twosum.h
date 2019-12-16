#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

namespace ALG_TWO_SUM {

/**
 * Given an array of integers, return indices of the two numbers such that they add up to a specific target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * Example:
 * Given nums = [2, 7, 11, 15], target = 9,
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 *
 */

class Solution1 {
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

class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> rets;
        for(int i = 0;i < nums.size();i++) {
            if(m.find(nums[i]) == m.end()) {
                m[target - nums[i]] = i;
            } else {
                rets.push_back(m[nums[i]]);
                rets.push_back(i);
                break;
            }
        }

        return rets;
    }
};

}

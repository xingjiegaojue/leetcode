#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

namespace ALG_LONGEST_PALINDROMIC_SUBSTRING {

/*
 * Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.
 *
 * Example 1:
 * Input: "babad"
 * Output: "bab"
 * Note: "aba" is also a valid answer.
 *
 * Example 2:
 * Input: "cbbd"
 * Output: "bb"
 */

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.empty()) {
            return string();
        }

        int start = 0;
        int end = 0;
        for(int i = 0;i < s.size();i++) {
            int len1 = expandAroundCenter(s,i,i);
            int len2 = expandAroundCenter(s,i,i + 1);

            int len = (len1 < len2) ? len2 : len1;
            if(len > (end - start + 1)) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }

        return s.substr(start,end - start + 1);
    }

    int expandAroundCenter(string &s,int left,int right) {
        while((left >= 0) && (right < s.size()) && (s.at(left) == s.at(right))) {
            left--;
            right++;
        }

        return (right - left - 1);
    }
};

}

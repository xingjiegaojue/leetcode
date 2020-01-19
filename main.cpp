#include <iostream>

#include "0001_twosum.h"
#include "0002_addtwonumbers.h"
#include "0003_longest_substring.h"
#include "0004_median_of_two_sorted_arrays.h"
#include "0005_longest_palindromic_substring.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    {
        cout << ALG_LONGEST_SUBSTRING::Solution().lengthOfLongestSubstring("abcabcbb") << endl;
        cout << ALG_LONGEST_SUBSTRING::Solution().lengthOfLongestSubstring(" ") << endl;
        cout << ALG_LONGEST_SUBSTRING::Solution().lengthOfLongestSubstring("abba") << endl;
    }

    {
        vector<int> nums1,nums2;
        nums1.push_back(1);nums1.push_back(2);
        nums2.push_back(3);nums2.push_back(4);
        cout << ALG_MEDIAN_OF_TWO_SORTED_ARRAYS::Solution1().findMedianSortedArrays(nums1,nums2) << endl;
    }

    {
        cout << "***************** longest palindromic substring *************/" << endl;
        cout << ALG_LONGEST_PALINDROMIC_SUBSTRING::Solution().longestPalindrome("babad") << endl;
        cout << ALG_LONGEST_PALINDROMIC_SUBSTRING::Solution().longestPalindrome("cbbd") << endl;
        cout << ALG_LONGEST_PALINDROMIC_SUBSTRING::Solution().longestPalindrome("a") << endl;
        cout << ALG_LONGEST_PALINDROMIC_SUBSTRING::Solution().longestPalindrome("ac") << endl;
        cout << ALG_LONGEST_PALINDROMIC_SUBSTRING::Solution().longestPalindrome("aaaa") << endl;
    }

    cout << endl;

    return 0;
}

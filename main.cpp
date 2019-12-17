#include <iostream>

#include "001_twosum.h"
#include "002_addtwonumbers.h"
#include "003_longest_substring.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << ALG_LONGEST_SUBSTRING::Solution().lengthOfLongestSubstring("abcabcbb") << endl;
    cout << ALG_LONGEST_SUBSTRING::Solution().lengthOfLongestSubstring(" ") << endl;
    cout << ALG_LONGEST_SUBSTRING::Solution().lengthOfLongestSubstring("abba") << endl;
    return 0;
}

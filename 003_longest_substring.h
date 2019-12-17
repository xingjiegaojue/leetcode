#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>
#include <stdlib.h>
#include <string.h>

using namespace std;

namespace ALG_LONGEST_SUBSTRING {

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int m[256];
        memset(m,-1,sizeof(m));

        unsigned int beginIndex = 0;
        unsigned int nextIndex = 0;

        int maxCount = 0;
        while(nextIndex < s.size()) {
            char ch = s.at(nextIndex);
            int index = m[(int)ch];

            if(index == -1) {
                m[(int)ch] = nextIndex;
                nextIndex++;
            }

            else {
                int count = nextIndex - beginIndex;
                maxCount = (maxCount < count) ? count : maxCount;

                // reset -1 in between old beginIndex and newer beginIndex
                int newBeginIndex = index + 1;
                for(int i = beginIndex;i < newBeginIndex;i++) {
                    m[(int)s.at(i)] = -1;
                }

                // mark current
                m[(int)ch] = nextIndex;

                // update begin
                beginIndex = newBeginIndex;

                // prepare next
                nextIndex++;
            }
        }

        int count = nextIndex - beginIndex;
        maxCount = (maxCount < count) ? count : maxCount;

        return maxCount;
    }
};

}

#include <iostream>
#include <vector>

using namespace std;

namespace ALG_MEDIAN_OF_TWO_SORTED_ARRAYS {

class Solution1 {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int totalCount = nums1.size() + nums2.size();

        int searchCount = totalCount / 2 + 1;
        bool isOddCount = totalCount % 2;

        int endValue = 0;
        int prevValue = 0;

        int index1 = 0;
        int index2 = 0;

        int index = 0;

        while(index < searchCount) {
            prevValue = endValue;

            if((index1 < nums1.size()) && (index2 < nums2.size())) {
                int val1 = nums1[index1];
                int val2 = nums2[index2];
                if(val1 <= val2) {
                    endValue = val1;
                    index1++;
                } else {
                    endValue = val2;
                    index2++;
                }
            }

            else if(index1 < nums1.size()) {
                endValue = nums1[index1];
                index1++;
            }

            else if(index2 < nums2.size()) {
                endValue = nums2[index2];
                index2++;
            }

            index++;
        }

        if(isOddCount) {
            return endValue;
        }

        return (prevValue + endValue) / 2.0;
    }
};

}

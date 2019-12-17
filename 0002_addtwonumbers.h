#include <iostream>
#include <vector>
#include <cstdlib>
#include <stdlib.h>
#include <string.h>

using namespace std;

namespace ALG_ADD_TWO_NUMBER {

/**
 * You are given two non-empty linked lists representing two non-negative integers.
 * The digits are stored in reverse order and each of their nodes contain a single digit.
 * Add the two numbers and return it as a linked list.
 *
 * You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 *
 * Example:
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
 *
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        bool prevInc = false;

        ListNode *header = 0;
        ListNode *prevLn = 0;

        ListNode *ln1 = l1;
        ListNode *ln2 = l2;

        while(ln1 || ln2) {
            int val = 0;

            // calculate value
            {
                if(ln1) {
                    val += ln1->val;
                    ln1 = ln1->next;
                }

                if(ln2) {
                    val += ln2->val;
                    ln2 = ln2->next;
                }

                if(prevInc) {
                    val++;
                }

                prevInc = (val >= 10);
            }

            // generate link nodes
            {
                ListNode *ln = new ListNode(val % 10);

                if(prevLn) {
                    prevLn->next = ln;
                }

                if(!header) {
                    header = ln;
                }

                prevLn = ln;
            }
        }

        if(prevInc && prevLn) {
            ListNode *ln = new ListNode(1);
            prevLn->next = ln;
        }

        return header;
    }
};

}

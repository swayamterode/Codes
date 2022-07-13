/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        ListNode *temp = head;
        while(temp != NULL){
            ans *= 2; //1: ans= 0*2 = 0, 2: ans= 1*2 = 2 , 3: ans = 2*2 = 4;
            ans += temp->val;//1:ans=0+1 = 1, 2:ans=2+0 = 2, 3:ans=4+1 = 5;
            temp = temp-> next; //1:temp = 0(now), 2:temp = 1 (now), 3:NULL(will terminate Loop)
        }
        return ans;
    }
};
/**
Input: head = [1,0,1]
Output: 5
**/

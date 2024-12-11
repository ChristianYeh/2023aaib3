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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode();
        ListNode* now=ans;
        int carry=0;
        while(l1!=nullptr || l2!=nullptr){
            if(l1==nullptr){
                int here=l2->val+carry;
                now->next=new ListNode(here%10);
                carry=here/10;
                l2=l2->next;
                now=now->next;
            }
            else if(l2==nullptr){
                int here=l1->val+carry;
                now->next=new ListNode(here%10);
                carry=here/10;
                l1=l1->next;
                now=now->next;
            }
            else{
                int here=l1->val+l2->val+carry;
                now->next=new ListNode(here%10);
                carry=here/10;
                l1=l1->next;
                l2=l2->next;
                now=now->next;
            }
        }
        if(carry==1) now->next=new ListNode(carry);
        return ans->next;
    }
};

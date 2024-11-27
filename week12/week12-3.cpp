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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(); //�ť]�u
        ListNode* now = ans; //���ש�bnow�̭�
        while(list1 != nullptr || list2 != nullptr){
            if(list1==nullptr){ //���@�ӬO�Ū�
                now->next = list2; //�������W
                list2 = nullptr; //�M��
            }
            else if(list2==nullptr){ //���@�ӬO�Ū�
                now->next = list1; //�t�~�@��,�������W
                list1 = nullptr;
            }
            else if(list1->val < list2->val){ //list1�O�p��
                now->next = new ListNode(list1->val); //�p��
                list1 = list1->next; //list1���U�@��
                now = now->next; //�{�b�]���U�@��
            }
            else{ //list2�]�O�p��
                now->next = new ListNode(list2->val); //���ש�bnow���U�@��,��p��
                list2 = list2->next; //list2���U�@��
                now = now->next; //�{�b�]���U�@��
            }
        }

        return ans->next; //�ť]�u���U�@��,�~�u������
    }
};

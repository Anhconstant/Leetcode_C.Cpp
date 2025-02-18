/*
    leetcode // problems // merge-two-sorted-lists
*/
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
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        int  set = 0;
        ListNode* ptr;
        if(ptr1->val <= ptr2->val) {
             ptr = ptr1;
            ptr1 = ptr1->next;
            set = 1;
        }else {
            ptr = ptr2;
            ptr2 = ptr2->next;
            set = 2;
        }
        while(ptr1!=NULL || ptr2!=NULL ){
            if(ptr1 == NULL ) {
                ptr->next = ptr2;
                break;
                }
            if(ptr2 == NULL ) {
                ptr->next = ptr1;
                break;
                }
            if(ptr1->val <= ptr2->val){
                ptr->next = ptr1;
                ptr1 = ptr1->next;
                ptr=ptr->next;
            }else {
                ptr->next = ptr2;
                ptr2 = ptr2->next;
                ptr=ptr->next;
            }
        }
        if(set == 1) return list1;
        return list2;
    }
};
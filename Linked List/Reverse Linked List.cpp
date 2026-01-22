/**
Name: 206. Reverse Linked List
link: https://leetcode.com/problems/reverse-linked-list/description/
Given the head of a singly linked list, reverse the list, and return the reversed list.

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
    void halper(ListNode* &head,ListNode* tmp){
        if(tmp->next == NULL){
            head = tmp;
            return;
        }

        halper(head,tmp->next);
        tmp->next->next = tmp;
        tmp->next = NULL;
    }
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)return head;
        halper(head,head);
        return head;
    }
};

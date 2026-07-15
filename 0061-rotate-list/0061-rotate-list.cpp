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
    ListNode* solve(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL; 
        temp->next = head;
        head = temp;
        return head; 
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next == NULL) return head;

        ListNode* temp = head;
        ListNode* curr = head;
        int cnt = 0;

        while(curr){
            curr = curr->next;
            cnt++;
        }
        while(k>cnt){
             k = k%cnt;
        }
        while(k--){
            temp = solve(temp);
        }
        return temp;
    }
};
#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int> reverse;
        ListNode *temp = head, *n = head;
        while ( temp != NULL){
            cout << temp->val << endl;
            reverse.push(temp->val);
            temp = temp->next;
        }
        while(head != NULL){
            head->val = reverse.top();
            reverse.pop();
            head = head->next;
        }
        return n;
    }
};
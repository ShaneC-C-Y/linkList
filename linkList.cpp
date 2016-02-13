#include <vector>
#include <stack>
#include <queue>

#include "linkList.h"


ListNode::ListNode( int n ) {
    val = n;
    next = NULL;
}

ListNode* reverseOrder(ListNode* head){
    if(!head)
        return head;
    stack<ListNode*> mystack;
    ListNode* ptr = head;
    while(ptr){
        mystack.push(ptr);
        ptr = ptr->next;
    }

    ListNode* ansHead = mystack.top();
    mystack.pop();
    // ans->next = NULL;

    ListNode* ansPtr = ansHead;
    while(!mystack.empty()){
        ansPtr->next = mystack.top();
        mystack.pop();
        // ans->next->next = NULL;
        
        ansPtr = ansPtr->next;
    }
    ansPtr->next = NULL;

    return ansHead;
}

ListNode* reverseOrderII(ListNode* head, int m, int n){

}

void rotate(ListNode* head, int k){

}
#include <iostream>
#include <vector>
#include "linkList.h"
using namespace std;

int main(){
    ListNode a(3), b(4), c(5);
    ListNode* head = &a;
    head->next = &b;
    head->next->next = &c;

    ListNode* ans;
    ans = reverseOrder(head);

    while(ans){
        cout << ans->val << " ";
        ans = ans->next;
    }
    
    return 0;
}

// #ifndef OP_H
// #define OP_H
using namespace std;

class ListNode {
public:
    int val;
    ListNode *next;
    ListNode (int n);
};

ListNode* reverseOrder(ListNode*);
ListNode* reverseOrderII(ListNode*, int, int);

void rotate(ListNode*, int);

// #endif
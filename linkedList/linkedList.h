#ifndef LINKEDLIST
#define LINKEDLIST

#include <iostream>
#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode()
        : val(0), next(nullptr) {}
    ListNode(int v)
        : val(v), next(nullptr) {}
    ListNode(int v, ListNode* nxt)
        : val(v), next(nxt) {}
};

ListNode* createLinkedlistFromVector(vector<int>& vec)
{
    ListNode* dummy = new ListNode();
    ListNode* cur = dummy;
    for (int num: vec) {
        cur->next = new ListNode(num);
        cur = cur->next;
    }
    return dummy->next;
}

void printLinkedlist(ListNode* head)
{
    ListNode* cur = head;
    while (cur) {
        cout << cur->val << ", ";
        cur = cur->next;
    }
    cout << endl;
}


#endif



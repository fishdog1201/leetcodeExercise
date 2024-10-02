#include "linkedList.h"

int main()
{
    vector<int> vec = {1,2,3,4,5};
    ListNode* head = createLinkedlistFromVector(vec);
    printLinkedlist(head);
    return 0;
}
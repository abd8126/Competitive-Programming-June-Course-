class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr || head->next->next==nullptr) return head;
        ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *evenptr=even;
        while(odd->next!=nullptr && even->next!=nullptr){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenptr;
        if(odd->next==nullptr) even->next=nullptr;
        return head;
    }
};

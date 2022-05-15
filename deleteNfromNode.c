struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *temp;
    struct ListNode *l;
    int i;
    int e;

    i = 0;
    temp = head;
    while (temp)
    {
        temp = temp->next;
        i++;
    }
    i = i - n;
    e = i;
    l = head;
    temp = head;
    if (i == 0)
        head = head->next;
    else
    {
        while (i > 0)
        {
            if (i < e)
                l = l->next;
            temp = temp->next;
            i--;
        }
        temp = temp->next;
        l->next= temp;
    }
    
    return(head);
}
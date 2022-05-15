struct ListNode* middleNode(struct ListNode* head){
    int i;
    struct ListNode *l;

    l = head;
    i = 0;
    while (l != NULL)
    {
        l = l->next;
        i++;
    }
   i = i / 2;
    printf("%d", i);
    while (i > 0)
    {
        head = head->next;
        i--;
    }
    return(head);
}
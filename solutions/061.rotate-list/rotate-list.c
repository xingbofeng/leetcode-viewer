struct ListNode* rotateRight(struct ListNode* head, int k) {
  if (head == NULL) {
    return NULL;
  }
  if (k == 0) {
    return head;
  }
  struct ListNode** p = &head, *q = head, *a;
  a = (struct ListNode *)malloc(sizeof(struct ListNode));
  for (int i = 0; i < k; i++) {
    q = q->next;
    if (q == NULL) {
      k = k % (i + 1);
      i = -1;
      q = *p;
    }
  }
  if (q == *p) {
    return *p;
  }
  while (q->next != NULL) {
    p = &((*p)->next);
    q = q->next;
  }
  a = (*p)->next;
  q->next = head;
  (*p)->next = NULL;
  return a;
}
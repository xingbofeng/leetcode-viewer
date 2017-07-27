/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode *result, *currentNode, *headNode;
	headNode = NULL;
	int flag = 0;
    while(l1 != NULL && l2 !=NULL) {
    	currentNode = (struct ListNode *)malloc(sizeof(struct ListNode));
    	currentNode->next = NULL;
    	if(l1->val + l2->val + flag > 9) {
    		currentNode->val = l1->val + l2->val + flag - 10;
    		flag = 1;
		} else {
			currentNode->val = l1->val + l2->val + flag;
			flag = 0;
		}
		if (headNode == NULL) {
			headNode = currentNode;
		} else {
			result->next = currentNode;
		}
		result = currentNode;
		l1 = l1->next;
		l2 = l2->next;
	}
	while(l1 != NULL) {
		currentNode = (struct ListNode *)malloc(sizeof(struct ListNode));
		currentNode->next = NULL;
		if(l1->val + flag > 9){
			currentNode->val = l1->val + flag - 10;
			flag = 1;
		} else {
			currentNode->val = l1->val + flag;
			flag = 0;
		}
		result->next = currentNode;
		result = currentNode;
		l1 = l1->next;
	}
	while(l2 != NULL) {
		currentNode = (struct ListNode *)malloc(sizeof(struct ListNode));
		currentNode->next = NULL;
		if(l2->val + flag > 9){
			currentNode->val = l2->val + flag - 10;
			flag = 1;
		} else {
			currentNode->val = l2->val + flag;
			flag = 0;
		}
		result->next = currentNode;
		result = currentNode;
		l2 = l2->next;
	}
	if(flag != 0) {
		currentNode = (struct ListNode *)malloc(sizeof(struct ListNode));
		currentNode->next = NULL;
		currentNode->val = flag;
		result->next = currentNode;
	}
	return headNode;
}
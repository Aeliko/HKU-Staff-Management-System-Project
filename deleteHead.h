//Modified function from ENGG1340
// deleteHead: delete the item pointed by the head pointer
// input: head - the head pointer of the list
void deleteHead( Node * & head)
{
	if (head != NULL) {
		Node * p = head;
		head = head->next;
		delete p;
	}
}

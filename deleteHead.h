//Modified function from ENGG1340
void deleteHead( Node * & head)
{
	if (head != NULL) {
		Node * p = head;
		head = head->next;
		delete p;
	}
}

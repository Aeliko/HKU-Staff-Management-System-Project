// findTail: look for the tail of the linked list
// input: head - the head pointer of the list
//        tail - the tail pointer of the list

void findTail(Node *head, Node *&tail) {
  Node *current = head;
  while (current->next != NULL) {
    current = current->next;
  }
  tail = current;
}

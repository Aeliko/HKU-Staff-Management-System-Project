//function to renew the tail of the linked list so that other functions work properly
void findTail(Node *head, Node *&tail) {
  Node *current = head;
  while (current->next != NULL) {
    current = current->next;
  }
  tail = current;
}

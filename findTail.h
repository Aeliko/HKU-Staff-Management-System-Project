void findTail(Node *head, Node *&tail) {
  Node *current = head;
  while (current->next != NULL) {
    current = current->next;
  }
  tail = current;
}

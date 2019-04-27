void deleteNodes(Node *head) {
  Node *current = head;
  while (current->next != NULL) {
    Node *p = current->next;
    current = current->next;
    delete p;
  }
}

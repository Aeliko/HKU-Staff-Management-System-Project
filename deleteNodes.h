//Modified function from ENGG1340
// deleteNodes: deleting a node
// input: head - the head pointer of the list
void deleteNodes(Node *head) {
  Node *current = head;
  while (current->next != NULL) {
    Node *p = current->next;
    current = current->next;
    delete p;
  }
}

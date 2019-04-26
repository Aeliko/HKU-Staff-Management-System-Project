void sort(string attr, Node *&head, Node *&tail)
Node *current = head;
Node *end = tail;
Node *temp = tail;
int swapped = 1;    //flag
while (swapped) {
  swapped = 0;
  while (current->next != end) {
    if (current->next->attr > current->attr) {
      swap(current, current->next);
      swapped = 1;
    }
    if (current->next->next == end) {
      temp = current->next;
    }
    current = current->next;
  }
  end = temp;
}




//two, one, three
void swap(Node *&one, Node *&two) {
  two->next = one->next;    //three
  one->next = two;
}

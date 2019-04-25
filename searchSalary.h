void searchSalary(string choice, int target, Node *head) {
  Node *current = head;
  if (choice == "larger") {
      while (current != NULL) {
        if ((int) (current->salary) >= target) {
          cout << current->name << "\n";
        }
        current = current->next;
      }
  }
  else if (choice == "smaller") {
    while (current != NULL) {
      if ((int) (current->salary) <= target) {
        cout << current->name << "\n";
      }
      current = current->next;
    }
  }
}

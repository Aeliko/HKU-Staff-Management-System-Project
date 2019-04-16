void searchSalary(string choice, string target, employee *head) {
  employee *current = &head;
  if (target = "larger") {
      while (current != NULL) {
        if ((int) (current->salary) > target) {
          cout << current->name;
        }
        current = current->next;
      }
  }
  else {
    while (current != NULL) {
      if ((int) (current->salary) < target) {
        cout << current->name;
      }
      current = current->next;
    }
  }
}
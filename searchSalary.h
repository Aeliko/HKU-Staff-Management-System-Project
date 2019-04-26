Node *searchSalary(string choice, int target, Node *current) {
  if (choice == "larger") {
        if ((current->salary) >= target) {
          return current;
        }
  }
  else if (choice == "smaller") {
      if ((current->salary) <= target) {
        return current;
      }
  }
  return NULL;
}

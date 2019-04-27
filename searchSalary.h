// searchSalary:  search for a targeted value in a salary
// input:   choice - larger of smaller
//          target - the targeted value of salary
//          current - the current pointer to the list
// output:  the node of employee containing the targeted value.


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

employee search(string choice, string target, employee *head) {
  string parm;
  switch (choice) {
  case "name":
    parm = "name";
    break;
  
  case "age":
    parm = "age";
    break;
  case "role":
    parm = "role";
    break;
  default:
    break;
  }
  employee *current = &head;
  while (current != NULL) {
    if ((int) (current->parm) == target) {
      return current;
    }
    current = current->next;
  }
  return NULL;
}
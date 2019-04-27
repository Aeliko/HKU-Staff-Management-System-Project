Node createEmployee(int haveCustomAttribute) {
  Node *employee = new Node;
  cin >> employee->id;
  cin >> employee->name;
  cin >> employee->age;
  cin >> employee->salary;
  cin >> employee->role;
  employee->next = NULL;
  if (haveCustomAttribute)
  cin >> employee->attributes;
  else
  employee->attributes = NULL;
  return employee;
}

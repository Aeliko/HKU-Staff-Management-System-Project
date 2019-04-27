/** a structure for storing a Node of employee in the linked list, for storing
an employee's ID, name, age, salary, role, employment status, custom attribute
and the memory location of the next Node **/
struct Node {
  int id;
  string name;
  int age;
  int salary;
  string role;
  int fired;
  Node *next;
  string attributes;
};

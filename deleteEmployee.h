//Modified functionn provided by ENGG1340
// deleteEmployee: Deleting an Employee
// input: lastEmployee - the last employee of the targeted employee
void deleteEmployee(Node *lastEmployee)
{
	Node *employee = lastEmployee->next;
	lastEmployee->next = employee->next;
	delete employee;
}

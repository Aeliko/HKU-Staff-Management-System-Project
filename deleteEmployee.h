//Modified function from ENGG1340
void deleteEmployee(Node *lastEmployee)
{
	Node *employee = lastEmployee->next;
	lastEmployee->next = employee->next;
	delete employee;
}

void deleteEmployee( Node *lastEmployee)
{
	Node *employee = lastEmployee->next;
	lastEmployee->next = employee->next;
	delete employee;
}

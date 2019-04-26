void insertEmployee( Node * after, string customAttribute)
{
    Node *employee = new Node;
    cin >> employee->id;
    cin >> employee->name;
    cin >> employee->age;
    cin >> employee->salary;
    cin >> employee->role;
    employee->next = NULL;
    if (customAttribute != "No_attribute")
    cin >> employee->attributes;
    else
    employee->attributes = "";
    employee->next= after->next;
	after->next = employee;

    // return employee;
}

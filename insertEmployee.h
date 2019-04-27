void insertEmployee( Node * after, string customAttribute)
{
    Node *employee = new Node;
    cout << "Enter ID: ";
    cin >> employee->id;
    cout << "Enter Name: ";

    cin >> employee->name;
    cout << "Enter Age: ";

    cin >> employee->age;
    cout << "Enter Salary: ";

    cin >> employee->salary;
    cout << "Enter Role: ";

    cin >> employee->role;

    employee->next = NULL;
    if (customAttribute != "No_attribute") {
        cout << "Enter " << customAttribute << ": ";
        cin >> employee->attributes;
    }    else
        employee->attributes = "";
    employee->next= after->next;
	after->next = employee;

    // return employee;
}

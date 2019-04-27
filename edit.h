Node *edit(string choice, Node *current, string attribute_name) {
  string parm;
  if (choice == "Name") {
    cout << "Please enter new value: ";
    cin >> current->name;
    }
    else
    if (choice == "Age") {
        cout << "Please enter new value: ";
        cin >> current->age;
    }
    else
    if (choice == "Salary") {

        cout << "Please enter new value: ";
        cin >> current->salary;
    }
    else
    if (choice == "Role") {

        cout << "Please enter new value: ";
        cin >> current->role;
    }
    else
    if (choice == attribute_name) {

        cout << "Please enter new value: ";
        cin >> current->attributes;
    }
    else
    if (choice == "ID") {
        cout << "Please enter new value: ";
        cin >> current->id;

    }
    else cout << "Invalid input" << endl;

    return NULL;
}

Node *edit(string choice, Node *current, string attribute_name) {
  string parm;
  if (choice == "name") {
    cout << "Please enter new value: ";
    cin >> current->name;
    }
    else
    if (choice == "age") {
        cout << "Please enter new value: ";

      cin >> current->age;
    }
    else
    if (choice == "salary") {

        cout << "Please enter new value: ";
      cin >> current->salary;
    }
    else
    if (choice == "role") {

        cout << "Please enter new value: ";
      cin >> current->role;
    }
    else
    if (choice == attribute_name) {

        cout << "Please enter new value: ";
      cin >> current->attributes;
    }


    return NULL;
}

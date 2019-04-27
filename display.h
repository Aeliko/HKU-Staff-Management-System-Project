void display(string attribute_name, Node *current) {
    if (attribute_name == "No_attribute") {
        // cout << "ID" << "\t" << "Name" << "\t" << "Age" << "\t" << "Salary" << "\t" << "Role" << "\n";
            cout << current -> id << "\t";
            cout << current -> name << "\t";
            cout << current -> age << "\t";
            cout << current -> salary << "\t";
            cout << current -> role << "\n\n";
    }
    else {
        // cout << "ID" << "\t" << "Name" << "\t" << "Age" << "\t" << "Salary" << "\t" << "Role" << "\t" << attribute_name << "\n";
            cout << current -> id << "\t";
            cout << current -> name << "\t";
            cout << current -> age << "\t";
            cout << current -> salary << "\t";
            cout << current -> role << "\t";
            cout << current -> attributes << "\n\n";
    }
}
